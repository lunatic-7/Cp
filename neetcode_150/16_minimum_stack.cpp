#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

class MinStack {

private:
	stack<int> st;
	stack<int> minStack;

public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);
        val = min(val, minStack.empty() ? val : minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        st.pop();
        minStack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};


int main()
{
    wasif();
    MinStack minStack;
	minStack.push(1);
	minStack.push(2);
	minStack.push(0);
	cout << minStack.getMin() << "\n"; // return 0
	minStack.pop();
	cout << minStack.top() << "\n";    // return 2
	cout << minStack.getMin() << "\n"; // return 1
    return 0;
}