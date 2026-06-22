#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 
int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	vector<int> arr(n), ans0, ans1, ans2, ans3;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] % 6 == 0) ans0.PB(arr[i]);  // 6 se multiple
    		else if (arr[i] % 2 == 0) ans1.PB(arr[i]);  // 2 se multiple
    		else if (arr[i] % 3 == 0) ans2.PB(arr[i]); // 3 se multiple
    		else ans3.PB(arr[i]);  // kabad
    	}

    	for (int i = 0; i < ans0.size(); ++i)
    	{
    		cout << ans0[i] << " ";
    	}

    	for (int i = 0; i < ans1.size(); ++i)
    	{
    		cout << ans1[i] << " ";
    	}

    	for (int i = 0; i < ans3.size(); ++i)
    	{
    		cout << ans3[i] << " ";
    	}

    	for (int i = 0; i < ans2.size(); ++i)
    	{
    		cout << ans2[i] << " ";
    	}


    	cout << "\n";
    }

    return 0;
}