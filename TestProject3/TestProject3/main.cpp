#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void main()
{
	std::vector<int> vec1(20) ;
	
	int i = 1;

	for (vector<int>::iterator iter = vec1.begin(); iter!=vec1.end(); ++iter)
	{
		*iter = i;  // µü´úÆ÷
		i = i + 3; 
	}

	int val = 7;
	auto result = find(vec1.begin(), vec1.end(),val);
	cout << "The Value " << val << "The result is:"  
		 << (result == vec1.cend() ? "is not present" : "is present") <<endl;

	system("PAUSE");

}

