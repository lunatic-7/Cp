#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool cmp(pair<int, int> a, pair<int, int> b)
{
    // jis order mai chaiye use return krdo
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

// comparator for an array to return in decreasing order 
bool cmp_2(int a, int b)
{
    return a > b;
}

int main()
{
    wasif();
    int n;
    cin >> n;
    vector<pair<int, int>> v_p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v_p[i].first >> v_p[i].second;
    }

    // Let us say we want to sort this pair, with 1st no in increasing order and if
    // 1st no of two pairs are same then decreasing order according to 2nd no.
    // For this type of operation we have to define a comparator function as a 3rd
    // argument in sort() function.
    sort(v_p.begin(), v_p.end(), cmp);

    for (auto &x : v_p)
    {
        cout << x.first << " " << x.second << "\n"; 
    }
    
    return 0;
}