// Question link: codechef.com/problems/REVERSE
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

vector<pair<int, int>> g[N];  // Vector of pairs to store pair of node and its weight
vector<int> lev(N, INF);  // level vector initialized with INF
int n, m;  // vertices and edges 

int bfs()
{
    deque<int> q;
    q.PB(1);  // Given starting point
    lev[1] = 0;

    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop_front();

        for (auto child : g[cur_v])
        {
            int child_v = child.F;
            int wt = child.S;

            // Here, in 0-1 BFS, we don't need visited array, because each node can be visited twice first with 1 weight and then with 0 weight.
            // So, here we use level as kind of visited array
            if (lev[cur_v] + wt < lev[child_v])
            {
                lev[child_v] = lev[cur_v] + wt;
                if (wt == 1) q.PB(child_v);
                else q.push_front(child_v);
            }
        }
    }
    return lev[n] == INF ? -1 : lev[n];  // returning level of nth node which will also be its shortest path from 1
}

int main()
{
    wasif();
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == y) continue;  // To prevent self loop
        g[x].PB({y, 0});  // Given edges with 0 as weight
        g[y].PB({x, 1});  // Opposite direction egdes created by me with 1 as weight
    }
    
    cout << bfs() << endl;

    return 0;
}