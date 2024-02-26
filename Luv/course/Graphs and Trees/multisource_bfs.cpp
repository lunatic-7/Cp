// Question Link: https://www.codechef.com/problems/SNSOCIAL
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e3+10;
const int INF = 1e9+10;
int val[N][N];  // To store value (nodes) of matrix (graph)
int vis[N][N];  // To store visited nodes
int lev[N][N];  // To store level of each node
int n, m;

// All possible movements array
vector<pair<int, int>> movements = {
    {0,1}, {0, -1}, {1, 0}, {-1, 0},
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

// A function to check if a transition is valid or not
bool isValid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}

// multisource bfs
int bfs()
{
    // finding maximum value in the matrix
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mx = max(mx, val[i][j]);
        }
    }

    queue<pair<int, int>> q;
    // To find and store indices of maximum value (they will be our sources)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mx == val[i][j])
            {
                q.push({i, j});
                lev[i][j] = 0;
                vis[i][j] = 1;
            }
        }
    }

    int ans = 0;

    // bfs code
    while (!q.empty())
    {
        auto v = q.front();
        int v_x = v.F;
        int v_y = v.S;
        q.pop();

        for (auto movement : movements)
        {
            int child_x = movement.F + v_x;
            int child_y = movement.S + v_y;
            if (!isValid(child_x, child_y)) continue;
            if (vis[child_x][child_y]) continue;
            q.push({child_x, child_y});
            lev[child_x][child_y] = lev[v_x][v_y] + 1;
            vis[child_x][child_y] = 1;
            ans = max(ans, lev[child_x][child_y]);  // The maximum level will be our ans, as it denotes we reached it in last transition
        }
    }
    return ans;
}

// To reset visited and level matrix for each testcase
void reset()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = 0;
            lev[i][j] = INF;
        }
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        reset();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> val[i][j];
            }
        }
        cout << bfs() << "\n";
    }
    
    return 0;
}