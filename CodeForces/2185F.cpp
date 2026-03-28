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

// NOT SOLVED


int calcPower(stack<int> power)
{
	int xorP = 0;
	while(!power.empty())
	{
		xorP ^= power.top();
		power.pop();
	}

	// cout << "xorp: " << xorP << "\n";
	return xorP;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, q;
    	cin >> n >> q;
		int num_cow = pow(2, n);
    	
    	vector<int> cow(num_cow);
    	for (int i = 0; i < num_cow; ++i)
    	{
    		cin >> cow[i];
    	}

    	// Rounds
    	while (q--)
    	{
    		int b, c;
    		cin >> b >> c;

    		vector<stack<int>> stk(num_cow);
    		
    			
    		// Give potion
    		// cow[b - 1] = c;
    		
    		// Put all cows in seperate queues initially
    		for (int i = 0; i < num_cow; ++i)
    		{
    			stk[i].push(cow[i]);

    		}

    		// Fight
    		int i = 0;
    		while (stk.size() > 1)
    		{
    			cout << "isme aya " << i  << " " << stk.size() << "\n";
    			if (calcPower(stk[i]) >= calcPower(stk[i + 1]))
    			{
    				while(!stk[i].empty())
    				{
    					stk[i + 1].push(stk[i].top());
    					stk[i].pop();
    					
    					// else if (stk[i + 1].size() == 0) stk.erase(stk.begin() + i + 1);

    				}
    			}
    			else
    			{
    				while(!stk[i + 1].empty())
    				{
    					stk[i].push(stk[i + 1].top());
    					stk[i + 1].pop();
    					// if (stk[i].size() == 0) stk.erase(stk.begin() + i);
    				}
    			}
    			// cout << "isse gya " << i  << " " << stk.size() << "\n";


    			// for (int i = 0; i < stk.size(); ++i)
    			// {
    			// }
    			i += 2;

    			// clean up queue with 0 elements
    			int k = 0;
    			while (num_cow > num_cow - 2)
    			{
    				if (stk[k].size() == 0) stk.erase(stk.begin() + k);
    				else k++;
    			}

    			// reset i with 0 when i reached to last second element
    			// if (i > stk.size()) i = 0;
    		}

    		// Round end (print no. of cow on top of the potion one)







    		cout << stk.size() << "\n";
    		// Only for checking
    		for (auto &x : stk)
    		{
    			cout << x.size() << "\n";
    			while(!x.empty())
    			{
    				cout << x.top() << " ";
    				x.pop();
    			}
    		}
    		cout << "\n";

    	}
    }

    return 0;
}