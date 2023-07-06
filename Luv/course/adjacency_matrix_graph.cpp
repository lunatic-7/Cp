#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e3+10;  // Let's suppose we can have a maximum of 10^3 vertices
int graph[N][N];  // Initializing an Adjacency matrix of N, N. And as it is declared globally, it will automatically be initialized with all 0 values

int main()
{
    wasif();
    int n, m;  // vertices and edges respectively
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        // Undirected graph
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    
    // Printing Adjacency matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << "\n";   
    }

    // But there is an issue with this approach:
    // O(N^2) -> space complexity
    // And if we get a N with 10^5 then N x N will be 10^10, which is out of limit for an array, an array can store a maximum of 10^6-10^7 capacity of values.
    // So, to represent large capacity of N we use adjacency lists. 
    
    return 0;
}