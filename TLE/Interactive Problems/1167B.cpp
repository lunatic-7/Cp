#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int query(int x, int y)
{
    cout << "? " << x << " " << y << endl;

    int response;
    cin >> response;
    return response;
}

void answer(vector<int>& ans)
{
	cout << "! ";
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main()
{
    wasif();
    vector<int> arr = {4, 8, 15, 16, 23, 42};
    
    vector<int> ans(6);
    for (int i = 1; i <= 4; ++i)
    {
        int resp = query(i, i + 1);
        ans[i - 1] = resp;
    }

    while (next_permutation(arr.begin(), arr.end()))
    {
        int ct = 0;
        for (int i = 0; i <= 3; ++i)
        {
            ct += (ans[i] == arr[i] * arr[i + 1]);
        }
        if (ct == 4) break;  // It means we have got our correct permutation
    }

    answer(arr);
    return 0;
}