
list<int> numbers = {1, 2, 3, 4, 5};
list<int> numbers2(numbers);        // ok, numbers2 has the same elements as numbers
vector<int> numbers3(numbers);      // error: no matching function for call...
list<double> numbers4(numbers);     // error: no matching function for call...


list<int> numbers = {1, 2, 3, 4, 5};
list<int> numbers2(numbers.begin(), numbers.end);        // ok, numbers2 has the same elements as numbers
vector<int> numbers3(numbers.begin(), --numbers.end());  // ok, numbers3 is {1, 2, 3, 4}
list<double> numbers4(++numbers.beg(), --numbers.end());        // ok, numbers4 is {2, 3, 4}
forward_list<float> numbers5(numbers.begin(), numbers.end());   // ok, number5 is {1, 2, 3, 4, 5}


