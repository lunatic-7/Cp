#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e3+10;
vector<int> graph[N];  // Vector of arrays
// eg: here, graph[0] is an array which will contain it's connected edges

int main()
{
    wasif();
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        graph[v1].PB(v2);
        graph[v2].PB(v1);
    }

    // Printing adjacency list
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << i << ": " << graph[i][j] << " "; 
        }
        cout << "\n";
    }
    
    // It's time complexity = O(N + M)
    
    return 0;
}