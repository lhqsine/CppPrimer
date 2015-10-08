
#if 0
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


#include <iostream>
#include <stdlib.h>
int main()
{
	int sum = 0;
	for(int i = -100; i <= 100; ++i)
	{
		sum +=i;
	}
	std::cout << "the sum is: " << sum << std::endl;
	system("pause");
	return 0;
}


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



#include <iostream>
#include <cstdlib>

int main()
{
	int num = 10;
	while (num >= 0)
	{
		std::cout << "the num is " << num << std::endl;
		num--;
	}
	
	system("pause");
}


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



#include <iostream>
#include <stdlib.h>
int main()
{
    std::cout << "/*" ;
    std::cout << "*/" ;
    std::cout << /*"/*"* ;
    std::cout << /* "*/" /* "/*" */;
    
    system("pause");
}  

int main()
{
    /*lsq_ken 
    * /* */ //111111
//    *
//    */

    return 0;
}




#include <iostream>
#include <cstdlib>

int main()
{
	double a , b;
	std::cout << "input two number" << std::endl;
	std::cin >> a >> b ;
	std::cout << "the result with a*b is: " << a*b << std::endl;

 	system("pause");
	return 0;
	
}


#include <iostream>
#include <stdlib.h>

int main()

{
	std::cout << "Hello,World" << std::endl;
	system("pause");
	return 0;
}
#endif
