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
 

int calPoints(vector<string>& operations) {
    
    vector<int> arr;
    int ans = 0;
    for (int i = 0; i < operations.size(); ++i)
    {
    	int temp;
    	if (operations[i] == "+") 
    	{
    		temp = arr[arr.size() - 1] + arr[arr.size() - 2];
    		arr.PB(temp);
    	}
    	else if (operations[i] == "C")
    	{
    		arr.POB();
    	}
    	else if (operations[i] == "D")
    	{
    		arr.PB(2 * arr[arr.size() - 1]);
    	}
    	else arr.PB(stoi(operations[i]));
    }

    for (auto &x: arr)
    {
    	ans += x;
    }

    return ans;
}

int main()
{
    wasif();
    vector<string> ops = {"1", "2", "+", "C", "5", "D"};
    cout << calPoints(ops);

    return 0;
}