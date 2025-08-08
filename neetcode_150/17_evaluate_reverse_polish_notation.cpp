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


int evalRPN(vector<string>& tokens) {
    stack<int> operands;

    for (int i = 0; i < tokens.size(); ++i)
    {
        if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
        {
            operands.push(stoi(tokens[i]));
        }
        else
        {
            int num1 = operands.top(); 
            operands.pop();
            int num2 = operands.top(); 
            operands.pop();

            if (tokens[i] == "+") operands.push(num2 + num1);
            else if (tokens[i] == "-") operands.push(num2 - num1);
            else if (tokens[i] == "*") operands.push(num2 * num1);
            else if (tokens[i] == "/") operands.push(num2 / num1);
        }
    }

    return operands.top();
}

int main()
{
    wasif();
    
    vector<string> tokens = {"4", "13", "5", "/", "+"};

    cout << evalRPN(tokens) << "\n";
    return 0;
}