#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e5+10;  // Maximum capacity of nodes
vector<int> g[N]; // Adjacency list
int par[N];  // To store parent of each nodes

void dfs(int vertex, int p=-1)
{
    par[vertex] = p;  // storing parent as value and vertex as index
    for (int child : g[vertex])
    {
        if(child == p) continue;  // skipping visited node (parent)
        dfs(child, vertex);
    }
}

// Returns path vector
vector<int> path(int v)
{
    vector<int> ans;
    while (v != -1)
    {
        ans.PB(v);
        v = par[v];
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    wasif();

    int n;  // Taking no. of nodes as input
    cin >> n;

    // Creating Adjacency List representation of tree
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].PB(v2);
        g[v2].PB(v1);
    }
    
    dfs(1);  // Calling dfs function to store all the parents

    int x, y;  // Children to find LCA
    cin >> x >> y;
    vector<int> path_x = path(x);  // Calculating path of x (child)
    vector<int> path_y = path(y);  // Calculating path of y (child)

    // Calculating children with lower path (lower array size of path)
    int mn_ln = min(path_x.size(), path_y.size());

    int lca = -1;
    // Calculating LCA
    for (int i = 0; i < mn_ln; i++)
    {
        if (path_x[i] == path_y[i]) lca = path_x[i];
        else break;
    }

    cout << lca << "\n";
    
    return 0;
}