#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    
    // Making a vector of vectors
    vector<vector<int>> v;

    // Taking size of vector of vector
    int N;
    cin >> N;
    // Taking user inputs in vector of vectors
    for (int i = 0; i < N; i++)
    {
        // Taking size of each nested vector
        int n;
        cin >> n;
        // making a temporary vector to finally push it back in our main vector
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    // Printing vector of vectors
    for (int i = 0; i < v.size(); i++)
    {
        // print size of each nested vector
        cout << "size: " << v[i].size() << "\n";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}