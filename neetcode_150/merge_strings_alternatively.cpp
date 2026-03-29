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
 

string mergeAlternately(string word1, string word2) {
    
    string ans = "";
    int small_len = min(word1.size(), word2.size());

    for (int i = 0; i < small_len; ++i)
    {
    	ans += word1[i];
    	ans += word2[i];
    }

    if (word1.size() > small_len) ans += word1.substr(small_len);
    else ans += word2.substr(small_len);

    return ans;
}

int main()
{
    wasif();
    string word1 = "abc", word2 = "xyzrdp";
    cout << mergeAlternately(word1, word2);

    return 0;
}