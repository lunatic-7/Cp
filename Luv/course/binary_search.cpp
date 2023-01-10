#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void binarySearch(vector<int> &v, int n, int to_find)
{
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < to_find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    
    if (v[lo] == to_find)
    {
        cout << lo << "\n";
    }
    else if (v[hi] == to_find)
    {
        cout << hi << "\n";
    }
    else
    {
        cout << "Not found";
    }
}

int main()
{
    wasif();
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int to_find;
    cin >> to_find;
    binarySearch(v, n, to_find);
    return 0;
}