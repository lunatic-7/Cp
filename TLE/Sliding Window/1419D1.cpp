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

int main()
{
    wasif();
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    sort(arr, arr + n);
    int half = n / 2;

    vector<int> new_arr;

    for (int i = 0; i < half; ++i)
    {
    	new_arr.PB(arr[n - i - 1]);
    	new_arr.PB(arr[i]);
    }

    if (n & 1) new_arr.PB(arr[half]);


    int ct = 0;

    for (int i = 1; i < n; i+=2)
    {
    	if (i == n - 1) break;
    	if (new_arr[i] < new_arr[i - 1] && new_arr[i] < new_arr[i + 1]) ct++;
    }

    cout << ct << "\n";
    showVect(new_arr);

    return 0;
}