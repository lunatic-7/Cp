#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 

vector<int> asteroidCollision(vector<int>& asteroids) {
    
    stack<int> ast;
    
    ast.push(asteroids[0]);
    for (int i = 1; i < asteroids.size(); ++i)
    {
        bool in_blast = 0;
        while (!ast.empty() && (asteroids[i] < 0 && ast.top() > 0))
        {
            if (abs(asteroids[i]) > abs(ast.top())) ast.pop();
            else if (abs(asteroids[i]) == abs(ast.top()))
            {
                in_blast = 1;
                ast.pop();
                break;
            }
            else if (abs(ast.top()) > abs(asteroids[i]))
            {
                in_blast = 1;
                break;
            }
        }

        if (!in_blast) ast.push(asteroids[i]);
    }

    vector<int> ans;
    while (!ast.empty())
    {
        ans.PB(ast.top());
        ast.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    wasif();
    vector<int> asteroids = {2, 4, -4, -1};
    showVect(asteroidCollision(asteroids));

    return 0;
}