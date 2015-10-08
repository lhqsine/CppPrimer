
#include <iostream>
#include <stdlib.h>
int main()
{
	int val1 = 0 ,val2 = 0 ,valtmp = 0 ;
	std::cout << "please input two number :" << std::endl;
	std::cout << "the first:" << std::endl;
	std::cin  >> val1 ;
	std::cout << std::endl;
	std::cout << "the second:" << std::endl;
	std::cin >> val2; 
	std::cout << std::endl;
	if(val1 >= val2)
	{
		valtmp = val1;
		val1 = val2;
		val2 = valtmp;
	}
	while ( val1 <= val2 )
	{
		std::cout << "val = " << val1 << std::endl;
		++val1;
	}
	system("pause");
	return 0;
}  