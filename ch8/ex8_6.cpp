#include <string>
#include <iostream>
#include <fstream>


class Sales_data {
	friend std::istream& read(std::istream& is, Sales_data& item);
	friend std::ostream& print(std::ostream& os, const Sales_data& item);
	friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

public:
	Sales_data(): bookNo(0), units_sold(0), revenue(0){};
	Sales_data(const std::string& s) : bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p)
		: bookNo(s), units_sold(n), revenue(n * p)
	{
	}
	Sales_data(std::istream& is) { read(is, *this); }

	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);

private:
	inline double avg_price() const;

private:
	std::string bookNo;
	unsigned units_sold ;
	double revenue ;
};

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue / units_sold : 0;
}

// declarations for nonmember parts of the Sales_data interface.
std::istream& read(std::istream& is, Sales_data& item);
std::ostream& print(std::ostream& os, const Sales_data& item);
Sales_data add(const Sales_data& lhs, const Sales_data& rhs);


Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// friend functions
std::istream& read(std::istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}


int main(int argc, char* argv[])
{
	std::ifstream input(argv[1]);

	//std::ofstream output(argv[2]);

	Sales_data total;
	if (read(input, total))
	{
		Sales_data trans;
		while (read(input, trans))
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		print(std::cout, total) << std::endl;
	}
	else
	{
		std::cerr << "No data?!" << std::endl;
	}
	system("PAUSE");
	return 0;
}