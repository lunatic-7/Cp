#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e5+10;
const int INF = 1e9+10;

vector<pair<int, int>> g[N];  // Pair of vector to store node and its weight together
vector<int> vis(N);  // Visited array
vector<int> dist(N, INF);  // distance array initialized with INF

void dijkstra(int source)
{
    set<pair<int, int>> st;  // set of pair to store weight and node resp, (sorted according to weight as weight is first)

    st.insert({0, source});  // inserting source
    dist[source] = 0;  // setting source distance to 0

    // Run until set is empty, just like BFS
    while(st.size() > 0)
    {
        auto node = *st.begin();  // getting 1st element out of set
        int v = node.S;
        int v_dist = node.F;
        st.erase(st.begin());  // removing first element from set

        if(vis[v]) continue;
        vis[v] = 1;
        for (auto child : g[v])
        {
            int child_v = child.F;
            int wt = child.S;
            if (dist[v] + wt < dist[child_v])
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }

    // T.C = O(V + E * log(V))
}

int main()
{
    wasif();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        // Directed weighted graph
        g[x].PB({y, wt});
    }

    // Running dijkstra from source 1
    dijkstra(1);

    // Printing shortest distance of all nodes from source node
    for (int i = 1; i <= n; i++)
    {
        cout << "Dist of node " << i << " from source 1: " << dist[i] << "\n";
    }
    
    return 0;
}