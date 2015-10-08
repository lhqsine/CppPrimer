
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