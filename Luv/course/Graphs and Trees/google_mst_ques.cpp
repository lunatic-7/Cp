// Question Link: https://codeforces.com/contest/1245/problem/D
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 2e3+10;

int parent[N];
int sizep[N];


// DSU to check if adding an edge will form a cycle or not
void make_set(int v) {
    parent[v] = v;
    sizep[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    // Path compression
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        // Union by size
        if (sizep[a] < sizep[b])
            swap(a, b);
        parent[b] = a;
        sizep[a] += sizep[b];
    }
}


int main()
{
    wasif();
    int n;
    cin >> n;
    vector<pair<int, int>> cities(n + 1);  // To store co-ordinates of cities

    for (int i = 1; i <= n; i++)
    {
        cin >> cities[i].F >> cities[i].S;
    }

    vector<int> c(n+1), k(n+1);

    for (int i = 1; i <= n; i++) cin >> c[i];  // cost of installing generator in ith town
    for (int i = 1; i <= n; i++) cin >> k[i];  // per km wire cost to connect 2 towns
    
    vector<pair<ll, pair<int, int>>> edges;  // weight, edges with that weight

    // connecting all nodes with 0th (imaginary) node, and it's weight will give the cost of installation of generator c[i]
    for (int i = 1; i <= n; i++)
    {
        edges.PB({c[i], {0, i}});  
    }

    // making connection b/w all the nodes with their weights (cost of connecting with wire)
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int dist = abs(cities[i].F - cities[j].F) + abs(cities[i].S - cities[j].S);
            ll cost = dist * 1LL * (k[i] + k[j]);
            edges.PB({cost, {i, j}});
        }
    }
    
    // Sorted according to weight
    sort(edges.begin(), edges.end());

    // Making all the nodes in DSU
    for (int i = 1; i <= n; i++) make_set(i);

    ll total_cost = 0;  // Sum of weights in forming Minimum spanning tree
    vector<int> power_stations;
    vector<pair<int, int>> connections;
    for (auto &edge : edges)
    {
        int wt = edge.F;
        int u = edge.S.F;
        int v = edge.S.S;
        if (find_set(u) == find_set(v)) continue;  // if they have a common parent (means cycle is forming) continue
        union_sets(u, v);
        total_cost += wt;
        if (u == 0 || v == 0) power_stations.PB(max(u, v));
        else connections.PB({u, v});
    }
    cout << total_cost << "\n";
    cout << power_stations.size() << "\n";
    for (int &station : power_stations)
    {
        cout << station << " ";
    }
    cout << "\n";

    cout << connections.size() << "\n";
    for (auto &connection : connections)
    {
        cout << connection.F << " " << connection.S << "\n";
    }

    return 0;
}