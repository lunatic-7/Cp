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
int depth[N], height[N];  // Arrays to store depth and height (already initialized with 0 (as global))

// NOTE: Same code of DFS for graphs will also work fine here, but we don't have cycles here in tress, so, we don't need visited array,
// and to handle child going back on visited parent, we can simply pass parent also in DFS.
void dfs(int vertex, int par=0)
{
    // Take action on vertex after entering the vertex
    for (int child : g[vertex])
    {
        // Take action on child before entering the child node
        if(child == par) continue;  // skipping visited node (parent)

        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        // Take action on child after exiting child node
        height[vertex] = max(height[vertex], height[child] + 1);
    }
    // Take action on vertex before exiting the vertex
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
    
    dfs(1);  // Calling dfs function

    // Viewing height and depth array
    cout << 'D' << " " << 'H' << "\n";
    for (int i = 1; i <= n; i++)
    {
        cout << depth[i] << " " << height[i] << "\n";
    }
    
    return 0;
}