
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
// windowsƽ̨ģ��eof������Ϊ ctrl+Z    unix����Ϊ ctrl+D
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