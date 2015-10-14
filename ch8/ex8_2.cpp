
#include <iostream>
#include <string>
#include <cstdlib>

std::istream& func(std::istream& is) 
{
	std::string buf;
	while (is >> buf)
	{
		std::cout << buf << std::endl;
	}
	is.clear();
	return is;
}
// windows平台模拟eof的输入为 ctrl+Z    unix环境为 ctrl+D
int main()
{
	std::istream& is = func(std::cin);
	if (is.rdstate() == 0)
	{
		std::cout << "OK!!" << std:: endl;
	}
	
	system("PAUSE");
	return 0;
}