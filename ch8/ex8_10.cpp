#include <iostream>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>


int main()
{
	
	std::ifstream input("sstream");
	if (!input)
	{
		std::cerr << "No data?" << std::endl;
		return -1;
	}

	std::vector<std::string> vecLine;
	std::string line;
	
	while (std::getline(input,line))
	{
		vecLine.push_back(line);
	}
	for (auto elemnt : vecLine)
	{
		std::istringstream iss(elemnt);
		std::string buf;
		while (iss >> buf)
		{
			std::cout << buf << std::endl;
		}
	}
	system("PAUSE");
	return 0;
}