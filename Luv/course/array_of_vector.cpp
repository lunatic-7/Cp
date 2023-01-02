#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    
    int N;
    cin >> N;
    // Making an array of vectors
    vector<int> v[N];

    // taking user inputs in array of vectors
    for (int i = 0; i < N; i++)
    {
        // taking size of each vectors
        int n;
        cin >> n;
        // taking user inputs in each vectors
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    // printing array of vectors
    for (int i = 0; i < N; i++)
    {
        // print size of each vector
        cout << "size: " << v[i].size() << "\n";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}