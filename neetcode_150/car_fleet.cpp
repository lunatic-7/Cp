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
 

int carFleet(int target, vector<int>& position, vector<int>& speed) {
    
    vector<pair<int, int>> pos_sp;

    for (int i = 0; i < position.size(); ++i)
    {
        pos_sp.PB({position[i], speed[i]});
    }

    sort(pos_sp.begin(), pos_sp.end(), greater<>());

    stack<float> time;
    for (int i = 0; i < pos_sp.size(); ++i)
    {
    	int remain_target = target - pos_sp[i].F;
    	float tm = (float) remain_target / (float) pos_sp[i].S;
    	
        if (time.empty()) time.push(tm);
        else if (!time.empty() && time.top() < tm) time.push(tm);
    }

    return time.size();
}


int main()
{
    wasif();
    int target = 10;
    vector<int> position = {5, 1, 0, 7};
    vector<int> speed = {2, 2, 1, 1};

    int ans = carFleet(target, position, speed);
    cout << ans << "\n";

    return 0;
}