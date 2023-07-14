// Question Link: https://www.interviewbit.com/problems/delete-edge/
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
int weight[N];  // To store weights of each node

void dfs(int vertex, int par=-1)
{
    // Adding vertex's weight first
    subtree_sum[vertex] += weight[vertex]; 
    for (int child : g[vertex])
    {
        if (child == par) continue;  // skipping visited node (parent)
        dfs(child, vertex);

        // Pre computing subtree sum
        subtree_sum[vertex] += subtree_sum[child]; 
    }
}

int main()
{
    wasif();

    int n;  // Taking no. of nodes as input
    cin >> n;

    // Taking weights input
    for (int i = 1; i <= n; i++)
    {
        cin >> weight[i];
    }
    
    // Creating Adjacency List representation of tree
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].PB(v2);
        g[v2].PB(v1);
    }
    
    dfs(1);  // Running DFS first to precompute subtree_sum

    // Calculating maximum subtree sum's product
    ll ans = 0;
    for (int i = 2; i <= n; i++)  // 2 se start kiya kyunki 2 ke upr edge hai delete krne k ly, 1 ke upr nahi hai
    {
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - part1;
        ans = max(ans, (part1 * 1LL * part2) % M);
    }
    
    cout << ans << "\n";
    
    return 0;
}