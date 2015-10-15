
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();

/*

it1					vector<int>::iterator
it2,it3  t4			vector<int>::const_iterator

*/