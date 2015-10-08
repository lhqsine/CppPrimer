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
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold	+= rhs.units_sold;
	revenue		+= rhs.revenue;
	return *this;
}
int main()
{
	Sales_data total;

	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl; 
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl; 
	}else
	{
		cerr << "No data?!" << endl;
		return -1;
	}

	system("pause");
	return 0;
}