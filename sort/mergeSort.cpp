#include <vector>

using std::vector;

int sort(vector<int>::iterator, size_t );
int merge(vector<int>::iterator ls, vector<int>::iterator le, vector<int>::iterator rs, vector<int>::iterator re);

int mergeSort(vector<int> & v)
{
	sort(v.begin(), v.size());
	return 0;
}

int sort(vector<int>::iterator v, size_t n)
{
	if (n < 2)
	{
		return 0;
	}
	else
	{
		sort(v, n / 2);
		sort(v + n / 2,n - n / 2);
		merge(v, v + n / 2, v + n / 2, v + n);
		return 0;
	}
}

int merge(vector<int>::iterator ls, vector<int>::iterator le, vector<int>::iterator rs, vector<int>::iterator re)
{
	vector<int> tmp;
	auto start = ls;
	while (true)
	{
		if (*ls > *rs)
		{
			tmp.push_back(*rs);
			rs++;
		}
		else
		{
			tmp.push_back(*ls);
			ls++;
		}

		if (ls == le)
		{
			for (auto i = rs; i < re; ++i)
			{
				tmp.push_back(*i);
			}
			break;
		}

		if (rs ==re)
		{
			for (auto i = ls; i < le; ++i)
			{
				tmp.push_back(*i);
			}
			break;
		}
	}

	for (auto i = tmp.begin(); i != tmp.end(); ++i)
	{
		*start = *i;
		start++;
	}
	return 0;
}
