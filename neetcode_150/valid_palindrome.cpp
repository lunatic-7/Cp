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
 

bool isPalindrome(string s) {
    
    // Will store lower, non space and only alphanumeric
    string filter_str = "";
    for (int i = 0; i < s.size(); ++i)
    {
    	if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
    	{
    		// ensures | ' ' lower
    		filter_str += s[i] | ' ';
    	}
    }

    int i = 0, j = filter_str.size() - 1;
    while (i < j)
    {
    	if (filter_str[i++] != filter_str[j--]) return 0;
    }

    return 1;
}

int main()
{
    wasif();
    string s = "Was it a car or a cat I saw ?";
    cout << isPalindrome(s) << "\n";

    return 0;
}