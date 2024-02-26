#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int M = 1e9 + 7;

const int N = 1e5 + 10; // Maximum capacity of vertices
vector<int> g[N];       // Adjacency list
bool vis[N];            // Visited array

bool dfs(int vertex, int par)
{
    vis[vertex] = true;
    bool isLoopExists = false;
    for (int child : g[vertex])
    {
        if (vis[child] && child == par)
            continue; // skipping visited node which are parent of current child
        if (vis[child])
            return true; // if visited node isn't parent of current child it means cycle exists
        isLoopExists |= dfs(child, vertex);
    }

    return isLoopExists;
}

int main()
{
    wasif();

    int n, e;
    cin >> n >> e;

    // Creating Adjacency List representation of graph
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].PB(v2);
        g[v2].PB(v1);
    }

    bool isLoopExists = false;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue; // To run dfs only for unvisited nodes
        if (dfs(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists << "\n";

    return 0;
}