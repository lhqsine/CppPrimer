#include <iostream>
#include <sstream>
#include <cstdlib>
using std::istream;

istream& func(istream& is)
{
    std::string buf;
    while (is >> buf) std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main()
{
    std::istringstream iss("hello");
    func(iss);
	system("PAUSE");
    return 0;
}