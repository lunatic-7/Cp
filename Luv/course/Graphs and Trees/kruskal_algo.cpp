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

int parent[N];
int size[N];


// DSU to check if adding an edge will form a cycle or not
void make_set(int v) {
    parent[v] = v;
    size[v] = 1;
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
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}


int main()
{
    wasif();
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> edges;  // weight, edges with that weight

    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.PB({wt, {u, v}});
    }

    // Sorted according to weight
    sort(edges.begin(), edges.end());

    // Making all the nodes in DSU
    for (int i = 1; i <= n; i++) make_set(i);

    int total_cost = 0;  // Sum of weights in forming Minimum spanning tree
    for (auto &edge : edges)
    {
        int wt = edge.F;
        int u = edge.S.F;
        int v = edge.S.S;
        if (find_set(u) == find_set(v)) continue;  // if they have a common parent (means cycle is forming) continue
        union_sets(u, v);
        total_cost += wt;
        cout << u << " " << v << "\n";  // Just to visualize
    }
    cout << total_cost << "\n";  // Just to visualize

    return 0;
}