
bool find(vector<int>::iterator beg, vector<int>::iterator end, int value)
{
	for(auto iter = beg; beg != end; ++iter)
	{
		if(*iter == value)
			return true;
	}	
	
	return false;
	
} 