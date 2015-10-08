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

private:
	std::string mName;
	std::string mAddress;
};
// 需要const，const的作用是修改隐式指针this，只需要读取不需要修改可以使用const，提高灵活性。