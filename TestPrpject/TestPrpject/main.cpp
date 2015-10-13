#include <iostream>
#include <string>
#include <cstdlib>

class Screen
{
public:
	typedef std::string::size_type pos;

	Screen() : cursor(0), height(0), width(0) {}
	Screen(pos ht , pos wd, char c) :  height(ht), width(wd), contents(ht * wd, c) {}
	
	char get() const { return contents[cursor] ; }
	char get(pos r, pos c) const { return contents[r * width + c]; }

	Screen move(pos r, pos c) { cursor = r * width + c; return *this; }

	Screen set(char ch){ contents[cursor] = ch; return *this; }
	Screen set(pos r, pos col, char ch){ contents[r*width + col] = ch; return *this; }

	Screen display(std::ostream &os){do_display(os); return *this;}
	const Screen display(std::ostream &os) const {do_display(os); return  *this;}

private:
    pos cursor;
    pos height, width;
    std::string contents;
	void do_display(std::ostream &os) const { os << contents;}

};


int main()
{
	Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

	system("pause");
	return 0;
}




#if 0
#include <iostream>
#include <string>
#include <cstdlib>

//using namespace std;

class Person
{
public:
	Person();
	~Person();

	std::string getName() const{ return mName; }
	std::string getAddress() const{ return mAddress; }
	// 需要const，const的作用是修改隐式指针this，只需要读取不需要修改可以使用const，提高灵活性。


	std::string mName;
	std::string mAddress;
};

std::istream & read(std::istream& input, Person& item);
std::ostream &print(std::ostream& output, const Person& item);

std::istream & read(std::istream& input, Person& item)
{
	input >> item.mName >> item.mAddress ;
	return input;
}

std::ostream &print(std::ostream& output, const Person& item)
{
	output << item.mName << " " << item.mAddress << std::endl;
	return output;
}

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
};

int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else {
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
		system("pause");
	return 0;
}


#include <iostream>
#include <cstdlib>

int main()
{
	int sum = 0;
	for(int j = 10; j >= 0; --j)
	{
		sum += j;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	system("pause");
	return 0;
}  


#include <iostream>
#include <stdlib.h>
int main()
{
	int sum = 0;
	for(int i = -100; i <= 100; ++i)
	{
		sum +=i;
	}
	std::cout << "the sum is: " << sum << std::endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <stdlib.h>
int main()
{
	int val1 = 0 ,val2 = 0 ,valtmp = 0 ;
	std::cout << "please input two number :" << std::endl;
	std::cout << "the first:" << std::endl;
	std::cin  >> val1 ;
	std::cout << std::endl;
	std::cout << "the second:" << std::endl;
	std::cin >> val2; 
	std::cout << std::endl;
	if(val1 >= val2)
	{
		valtmp = val1;
		val1 = val2;
		val2 = valtmp;
	}
	while ( val1 <= val2 )
	{
		std::cout << "val = " << val1 << std::endl;
		++val1;
	}
	system("pause");
	return 0;
}  



#include <iostream>
#include <cstdlib>

int main()
{
	int num = 10;
	while (num >= 0)
	{
		std::cout << "the num is " << num << std::endl;
		num--;
	}
	
	system("pause");
}


#include <iostream>
#include <cstdlib>

int main()
{
	int num = 50, sum=0;
	while (num <= 100)
	{
		sum += num;
		num++;
	}
	std::cout << "the Sum from 50 to 100 is " << sum << std::endl;
	system("pause");
}



#include <iostream>
#include <stdlib.h>
int main()
{
    std::cout << "/*" ;
    std::cout << "*/" ;
    std::cout << /*"/*"* ;
    std::cout << /* "*/" /* "/*" */;
    
    system("pause");
}  

int main()
{
    /*lsq_ken 
    * /* */ //111111
//    *
//    */

    return 0;
}




#include <iostream>
#include <cstdlib>

int main()
{
	double a , b;
	std::cout << "input two number" << std::endl;
	std::cin >> a >> b ;
	std::cout << "the result with a*b is: " << a*b << std::endl;

 	system("pause");
	return 0;
	
}


#include <iostream>
#include <stdlib.h>

int main()

{
	std::cout << "Hello,World" << std::endl;
	system("pause");
	return 0;
}
#endif
