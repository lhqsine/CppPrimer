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
