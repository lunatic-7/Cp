#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1,3,-1,-3,5,3,6,7};

	int i = 0, k = 3;
	while (k <= arr.size())
	{
		int maxi = INT_MIN;
		for (int i = 0; i < k; ++i)
		{
			maxi = max(maxi, arr[i]);
		}
		cout << maxi << " ";
		i++, k++;
	}

	return 0;
}