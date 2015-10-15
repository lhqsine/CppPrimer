
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(),
					iter2 = lst2.end();

while (iter1 < iter2)   /* ... */

// 改为
while (iter1 != iter2)   /* ... */

// 算术运算只能用于 string vector deque arry