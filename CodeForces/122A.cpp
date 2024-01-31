#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

vector<int> arr = {4, 7, 47, 74, 44, 77, 444, 477, 447, 744, 774, 747, 474, 777};

bool alLucky(int n)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if (n % arr[i] == 0) return 1;
	}
	return 0;
}

int main()
{
    wasif();
    int n;
    cin >> n;

    cout << (alLucky(n) ? "YES" : "NO") << "\n";
    return 0;
}