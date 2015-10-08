#include <iostream>
#include <stdlib.h>

int main()

{

std::cout << "please enter two number" << std::endl;
int a = 0, b = 0;
std::cin >> a >> b ;
std::cout << "the first number is" << a ;
<< "and"  << b ;
<< " is " << a + b <<std::endl;
system("pause");
return 0;

}

//该程序是错误的，不合法，无法输出，缺少输出流，在前面加上std::cout即可。