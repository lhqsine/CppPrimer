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