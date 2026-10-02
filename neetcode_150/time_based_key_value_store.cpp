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


class TimeMap {

private:
    map<string, vector<pair<string, int>>> timemap;

public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) 
    {
        timemap[key].PB({value, timestamp});        
    }
    
    string get(string key, int timestamp) 
    {
        // If no such key is already there
        if (timemap.find(key) == timemap.end()) return "";
        vector<pair<string, int>>& each_key = timemap[key]; // here & becomes very important, 
        // as we want to refrence to existing vector, not create one on each get call, if no & will get TLE


        // now for all the int values we can apply binary search on it and return <= timestamp
        int low = 0, high = each_key.size() - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (each_key[mid].S <= timestamp)
            {
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }

        return (ans != -1 ? each_key[ans].F : "");
    }
};


int main()
{

    TimeMap timeMap;
    timeMap.set("alice", "happy", 100);  // store the key "alice" and value "happy" along with timestamp = 1.
    timeMap.set("alice", "nehhh", 101);  // store the key "alice" and value "happy" along with timestamp = 1.
    timeMap.set("bob", "sad", 1);  // store the key "alice" and value "happy" along with timestamp = 1.
    cout << timeMap.get("alice", 1) << "\n";
    return 0;
}