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
set<string> operands = {"+", "-", "*", "/"};


int evalRPN(vector<string>& tokens) {
    stack<int> rpn;
    for (int i = 0; i < tokens.size(); ++i)
    {
    	if (operands.find(tokens[i]) == operands.end()) rpn.push(stoi(tokens[i]));
    	else 
    	{
    		int num1 = rpn.top();
    		rpn.pop();
    		int num2 = rpn.top();
			rpn.pop();
    		
    		if (tokens[i] == "+") num2 += num1;
    		else if (tokens[i] == "-") num2 -= num1;
    		else if (tokens[i] == "*") num2 *= num1;
    		else if (tokens[i] == "/") num2 /= num1;

    		rpn.push(num2);
    	}
    }

    return rpn.top();
}

int main()
{
    wasif();
    vector<string> tokens = {"1", "2", "+", "3", "*", "4", "-"};
    cout << evalRPN(tokens);

    return 0;
}