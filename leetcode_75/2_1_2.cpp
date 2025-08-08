#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int arr[6] = {31, 41, 59, 26, 41, 58};

    // Decreasing order insertion sort
    for (int i = 1; i < 6; ++i)
    {
    	int key = arr[i];
    	
    	int j = i - 1;
    	while (j >= 0 && arr[j] < key)
    	{
    		arr[j + 1] = arr[j];
    		j--;
    	}
    	arr[j + 1] = key;

    	// for (int i = 0; i < 6; ++i)
        // {
    	//     cout << arr[i] << " ";
        // }
        // cout << "\n";
    }

    for (int i = 0; i < 6; ++i)
    {
    	cout << arr[i] << " ";
    }

    return 0;
}