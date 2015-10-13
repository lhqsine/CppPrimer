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
