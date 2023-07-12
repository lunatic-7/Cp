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
int depth[N];  // Array to store depth

void dfs(int vertex, int par=-1)
{
    for (int child : g[vertex])
    {
        if(child == par) continue;  // skipping visited node (parent)
        depth[child] = depth[vertex] + 1;

        dfs(child, vertex);
    }
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
    
    dfs(1);  // Calling dfs function on 1 as root node

    int mx_depth = -1;  // To store maximum depth when root node is 1
    int mx_d_node;  // To store maximum depth's node when root node is 1

    // Calculating mx_depth and mx_d_node when root node is 1
    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }

    dfs(mx_d_node);  // Now running dfs on that max depth's node, which will be one end of our diameter
    mx_depth = -1;

    // Calculating mx_depth when root node is one end of our diameter
    for (int i = 0; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];
        }
    }

    cout << mx_depth << "\n";
    
    return 0;
}