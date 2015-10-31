#include <vector>

using std::vector;

int selectSort(vector<int> & v)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		auto tmp = i;
		for (auto j = i; j != v.end(); ++j)
		{
			if (*tmp > *j)
			{
				tmp = j;
			}
		}
		std::swap(*tmp, *i);
	}

	return 0;
}
