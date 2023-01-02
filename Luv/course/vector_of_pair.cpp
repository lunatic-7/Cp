#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void printVec(vector<pair<int, int>> &v)
{

    for (int i = 0; i < v.size(); i++)
    {   
        // printing vector of pairs
        cout << v[i].first << " " << v[i].second << "\n";
    }
    cout << "\n";
}

int main()
{
    wasif();
    // Making a vector of pairs
    vector<pair<int, int>> v;

    int n;
    cin >> n;
    // Taking user inputs in vector of pairs
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    printVec(v);

    return 0;
}