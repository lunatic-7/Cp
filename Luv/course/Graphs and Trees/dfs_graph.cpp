#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e5+10;  // Maximum capacity of vertices
vector<int> g[N]; // Adjacency list
bool vis[N];  // Visited array

void dfs(int vertex)  // vo vertex jha se dfs start krni hai
{
    // Take action on vertex after entering the vertex
    cout << vertex << endl; // just to visualize what's happening
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        // Take action on child before entering the child node
        cout << "Parent: " << vertex << ", Child: " << child << "\n"; // just to visualize what's happening
        if(vis[child]) continue;  // skipping visited node
        dfs(child);
        // Take action on child after exiting child node
    }
    // Take action on vertex before exiting the vertex

    // Time complexity: O(V + E)  Recursive Function will be called V (vertex) times, and in each call there is a for loop E (edges) times
}

int main()
{
    wasif();

    int n, m;
    cin >> n >> m;

    // Creating Adjacency List representation of graph
    for (int i = 0; i < 9; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].PB(v2);
        g[v2].PB(v1);
    }
    
    dfs(1);  // Calling dfs function
    return 0;
}