#include <iostream>

using namespace std;

double square(double x) 
	{
		return x * x ;
	}

int fact(int x)
{
	int ret = 1;
	while (x>1)
	{
		ret *= x--;
	}
	return ret;
}

int main()
{
	double ret = square(5.0);
	int ret_fact = fact(3);

	cout << "ret = " << ret << endl;
	cout << "ret_fact = " << ret_fact << endl;
	system("PAUSE");
	return 0;
	
}
