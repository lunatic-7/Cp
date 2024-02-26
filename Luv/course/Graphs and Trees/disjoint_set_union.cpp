// For more info, Read this: https://cp-algorithms.com/data_structures/disjoint_set_union.html
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
    // Finding individual components count
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }

    while (k--)
    {
        int u, v;
        cin >> u >> v;
        union_sets(u, v);
    }

    int connected_ct = 0;
    // Obviously no. of connected components will be equal to no. of nodes which are their own parent
    for (int i = 1; i <= n; i++)
    {
        if (find_set(i) == i) connected_ct++;
    }
    
    cout << connected_ct << "\n";

    return 0;
}