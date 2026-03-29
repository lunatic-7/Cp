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
 

void reverseString(vector<char>& s) {
    
    for (int i = 0; i < s.size() / 2; ++i)
    {
    	char temp = s[i];
    	s[i] = s[s.size() - i - 1];
    	s[s.size() - i - 1] = temp;
    }

    for (int i = 0; i < s.size(); ++i)
    {
    	cout << s[i] << " ";
    }
    cout << "\n";
}

const int M = 1e9+7;
 
int main()
{
    wasif();
    vector<char> s = {'n', 'e', 'e', 't', 'o'};
    reverseString(s);

    return 0;
}