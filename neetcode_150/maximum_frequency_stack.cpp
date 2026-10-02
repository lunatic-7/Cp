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
 

class FreqStack {
private:
	unordered_map<int, vector<int>> mp;
	int i = 0;
public:
    FreqStack() {}
    
    void push(int val) 
    {
    	mp[val].PB(i);
    	i++;
    }

    // for me
    // void show()
    // {
    // 	for (auto& x: mp)
    // 	{
    // 		cout << x.F << ": ";
    // 		for (int i = 0; i < x.S.size(); ++i)
    // 		{
    // 			cout << x.S[i] << " ";
    // 		}
    // 		cout << "\n";
    // 	}
    // }
    
    int pop() 
    {
    	// Find the maximum freq
    	int max_freq = 0;
    	for (auto &x : mp)
    	{
    		int sz = x.S.size();
    		max_freq = max(max_freq, sz);
    	}

    	// Get the max freq elem along with their index (as key sorted as greater<int>) and
    	// then remove that index from the mp
    	map<int, int, greater<int>> maxi;  // ind, elem    
    	for (auto &x: mp)
    	{
    		int sz = x.S.size();
    		if (sz == max_freq) maxi[x.S[sz - 1]] = x.F;
    	}

    	// remove that elem's index from mp
    	auto elemit = maxi.begin();
    	int elem = elemit->S;
    	mp[elem].pop_back();

        return elem;
    }
};


int main()
{
    wasif();

    FreqStack* obj = new FreqStack();
	obj->push(5);
	obj->push(7);
	obj->push(5);
	obj->push(7);
	obj->push(4);
	obj->push(5);

	cout << obj->pop() << "\n";
	cout << obj->pop() << "\n";
	cout << obj->pop() << "\n";
	cout << obj->pop() << "\n";

    return 0;
}