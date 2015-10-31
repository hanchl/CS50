#include <vector>

using std::vector;

int bubbleSort(vector<int> & v)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		for (auto j = i + 1; j != v.end(); ++j)
		{
			if (*i > *j)
			{
				std::swap(*i, *j);
			}
		}
	}

	return 0;
}
