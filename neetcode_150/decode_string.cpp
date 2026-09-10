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
 

string decodeString(string s) {
    
    stack<char> par_ans;
    for (int i = 0; i < s.size(); ++i)
    {
        string temp_str = "";
        int times = 0;
        if (s[i] == ']')
        {
            // To get the string to be multiplied
            while (par_ans.top() != '[')
            {
                temp_str += par_ans.top();
                par_ans.pop();
            }

            // remove the '['
            par_ans.pop();

            // Get the quantity to be multiplied
            int place = 0;
            while (!par_ans.empty() && par_ans.top() >= '0' && par_ans.top() <= '9')
            {
                times = ((par_ans.top() - '0') * pow(10, place)) + times;
                par_ans.pop();
                place++;
            }


            // append this resolved string back to par_ans
            string rslv_str = "";
            for (int i = 0; i < times; ++i)
            {
                rslv_str += temp_str;
            }

            // push char by char, as stack is of type char
            for (int i = rslv_str.size() - 1; i >= 0; --i)
            {
                par_ans.push(rslv_str[i]);
            }
        }
        else par_ans.push(s[i]);
    }

    // Now convert par_ans to correct string;
    string ans = "";
    while (!par_ans.empty())
    {
        ans += par_ans.top();
        par_ans.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    wasif();
    
    string s = "10[c]";
    string ans = decodeString(s);
    cout << ans << "\n";

    return 0;
}