#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

using std::list;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	list<int> mList(4, 5);
	vector<int> TemVec(4, 6);

	vector<double> dVec(mList.begin(), mList.end());
	for (auto i : mList)
	{
		cout << i ;
	}
	cout << endl;

	for (auto t : dVec)
	{
		cout << t;
	}
	cout << endl;

	vector<double> dVec2(TemVec.begin(), TemVec.end());
	for (auto i : TemVec) cout << i;
	cout << endl;
	for (auto t : dVec2) cout << t;
	cout << endl;
	system("PAUSE");
	return 0;
}


