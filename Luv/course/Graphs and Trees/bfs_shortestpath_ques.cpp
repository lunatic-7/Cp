// Question link: https://www.spoj.com/problems/NAKANJ/
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int INF = 1e9+10;  // Setting custom value for infinity

int vis[8][8];  // visited matrix
int lev[8][8];  // level matrix

// converting char part of string to int
int getX(string s)
{
    return s[0] - 'a';
}

// coverting int part of string to int
int getY(string s)
{
    return s[1] - '1'; 
}

// Prevent invalid chess (matrix) positions
bool isValid(int x, int y)
{
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

// All possible movements of a horse in chess
vector<pair<int, int>> movements = {
    {-1, 2}, {1, 2},
    {-1, -2}, {1, -2},
    {2, -1}, {2, 1},
    {-2, -1}, {-2, 1}
};

int bfs(string source, string dest)
{
    // Coverting source and destinations to integer to work with them further
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);

    // Queue of pair, to handle BFS of matrix
    queue<pair<int, int>> q;
    q.push({sourceX, sourceY});
    vis[sourceX][sourceY] = 1;  // Marking positions (nodes) visited
    lev[sourceX][sourceY] = 0;  // Level of current position (node)

    while (!q.empty())
    {
        pair<int, int> v = q.front();
        int x = v.first, y = v.second;
        q.pop();

        // Visiting to all possible positions from our current position (node) of horse
        for (auto movement : movements)
        {
            int childX = movement.first + x;
            int childY = movement.second + y;
            // If position is not valid continue
            if (!isValid(childX, childY)) continue;
            // If position is not already visited
            if(!vis[childX][childY])
            {
                q.push({childX, childY});
                lev[childX][childY] = lev[x][y] + 1;
                vis[childX][childY] = 1;
            }
        }

        // As soon as we get a level for our destination we break from it, just to save time
        if(lev[destX][destY] != INF) break;
    }
    // returning level of our desitination which will be our shortest path to our destination as well
    return lev[destX][destY];
}

// Resetting level and visited matrix for each test cases
void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            lev[i][j] = INF;  // resetting level values to INF
            vis[i][j] = 0;  // resetting visited values to 0
        }
    }
}

int main()
{
    wasif();
    int n;
    cin >> n;
    while(n--)
    {
        reset();
        string s1, s2;
        cin >> s1 >> s2;
        cout << bfs(s1, s2) << "\n";
    }
    
    return 0;
}