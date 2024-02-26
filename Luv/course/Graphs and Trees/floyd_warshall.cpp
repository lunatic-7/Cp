#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;


const int N = 510;  // N is small because T.C of this algorithm is O(n^3)
const int INF = 1e9+10;

int dist[N][N];  // Distance matrix to store corresponding distance between i, j

int main()
{
    wasif();
    // Initial setup of distance matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j) dist[i][j] = 0;  // If i and j are same then distance b/w them will be zero, ex dist b/w (1,1) will be 0
            else dist[i][j] = INF;  // Else set all distances to zero, INF indicates no path exist b/w these pairs of i, j for now
        }
    }

    // Taking inputs and setting their weights
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        dist[x][y] = wt;
    }

    // Floyd warshall algo
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }   
        }
    }
    
    // Printing distance matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF) cout << "I ";  // If there is no path b/w (i,j)
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}