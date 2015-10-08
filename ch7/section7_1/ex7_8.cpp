#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Sales_data
{
	string bookNo;

	//	unsigned units_sold = 0;  //CPP11特性
	//	double revenue = 0.0;

	unsigned units_sold;
	double revenue;

	string isbn() const { return bookNo; }
	Sales_data&  combine(const Sales_data&);
	
	Sales_data add(Sales_data& lhs, Sales_data& rhs);

};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold	+= rhs.units_sold;
	revenue		+= rhs.revenue;
	return *this;
}



Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
istream &read (istream& input, Sales_data& item);
ostream &print(ostream& output, const Sales_data& item);

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream& read(istream& input, Sales_data& item)
{
	double price = 0;
	input >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return input;
}

ostream& print(ostream& output, const Sales_data& item)
{
	output << item.bookNo << " " << item.units_sold << " " << item.revenue << endl;
	return output;
}

int main()
{
	Sales_data total;

	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				add(total, trans);
			    //total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}else
	{
		cerr << "No data?!" << endl;
		return -1;
	}

	system("pause");
	return 0;
}