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
vector<int> g[N];  // Adjacency list
int subtree_sum[N];  // To store pre computed subtree sum
int even_ct[N];  // To store pre computed even count of a subtree

void dfs(int vertex, int par=0)
{
    // Adding vertex's own value first
    subtree_sum[vertex] += vertex; 
    // Incrementing vertex's count if it itself is even
    if (vertex % 2 == 0) even_ct[vertex]++;
    for (int child : g[vertex])
    {
        if(child == par) continue;  // skipping visited node (parent)
        dfs(child, vertex);

        // Pre computing subtree sum
        subtree_sum[vertex] += subtree_sum[child]; 
        // Pre computing even count
        even_ct[vertex] += even_ct[child]; 
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
    
    dfs(1);  // Running DFS first to precompute even_ct and subtree_sum

    // Viewing subtree_sum and even_ct array
    cout << "Subtree sum" << " " << "Even count" << "\n";
    for (int i = 1; i <= n; i++)
    {
        cout << subtree_sum[i] << "\t\t" << even_ct[i] << "\n";
    }
    
    return 0;
}