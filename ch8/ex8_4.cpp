#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using std::cin;
using std::cout;
using std::getline;
using std::endl;

void ReadFile(const std::string& fileName, std::vector<std::string>& vec )
{
	ifstream in(fileName);
	if (in)
	{
		string buf;
		while (getline(in, buf))
		{
			vec.push_back(buf);
		}
	}
}

// windowsƽ̨ģ��eof������Ϊ ctrl+Z    unix����Ϊ ctrl+D
int main()
{
	vector<string> vec;
	ReadFile("data/sstream", vec);

	for (const auto& it : vec)
	{
		cout << it << endl;
	}


	system("PAUSE");
	return 0;
}