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
	Sales_data book;
	double price;
	cin >> book.bookNo >> book.units_sold >> price;
	book.revenue = book.units_sold * price;
	cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << price <<endl;
	
	system("pause");
	return 0;
}
