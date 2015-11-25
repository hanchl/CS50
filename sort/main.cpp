#include <iostream>
#include <vector>
#include <cstdlib>

using namespace  std;

int bubbleSort(vector<int> & v);
int selectSort(vector<int> & v);
int quickSort(vector<int> & v);
int mergeSort(vector<int> & v);

int main(void)
{
	vector<int> v(10);

	cout << "before sort:\n";
	for (auto & i : v)
	{
		i = rand();
		cout << i << endl;
	}

	mergeSort(v);
	
	cout << "after sort:\n";
	for (auto i : v)
	{
		cout << i << endl;
	}

	return 0;
}
