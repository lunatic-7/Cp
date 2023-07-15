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
vector<int> g[N];

int vis[N];  // Visited array
int level[N];  // level array

void bfs(int source)
{
    queue<int> q;  // queue to store current vertex
    q.push(source);
    vis[source] = 1;  // marking current vertex visited so, we don't come back to it again.

    while (!q.empty())  // running until the queue is empty
    {
        int cur_v = q.front();
        q.pop();  // popping out the current vertex

        cout << cur_v << " ";  // Printing order of popping (just to visualize)
        for (int child : g[cur_v])  // Visiting all children of current vertex
        {
            if (!vis[child])  // If that child is not already in visited array
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v] + 1;  // setting level
            }
        }
        
    }
    cout << "\n";
    // V = vertices, E = edges
    // It's time complexity = O(V + E)
}

int main()
{
    wasif();
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        g[v1].PB(v2);
        g[v2].PB(v1);
    }

    bfs(1);

    // Printing level (Just to visualize)
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": " << level[i] << "\n";
    }
    
    return 0;
}