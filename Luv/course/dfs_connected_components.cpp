// Question link: https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

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

vector<vector<int>> cc;  // Vector to store connected components
vector<int> current_cc;  // To put in cc

void dfs(int vertex)
{
    vis[vertex] = true;
    current_cc.PB(vertex);
    for (int child : g[vertex])
    {
        if(vis[child]) continue;  // skipping visited node
        dfs(child);
    }
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

    int ct = 0;  // To store count of connected components
    for (int i = 1; i <= n; i++)
    {
        if (vis[i]) continue;  // To run dfs only for unvisited nodes
        current_cc.clear(); // clearing current_cc before running dfs
        dfs(i);
        cc.PB(current_cc);  // storing each connected components
        ct++;
    }

    // Printing no. of connected components
    cout << cc.size() << "\n";

    // Printing each connected components
    for (auto c_cc : cc)
    {
        for (auto vertex : c_cc)
        {
            cout << vertex << " ";
        }
        cout << "\n";
    }
    
    return 0;
}