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


bool isPalindrome(string s, int x, int y) {

    int i = x, j = y;
    while (i < j)
    {
        if (s[i++] != s[j--]) return 0;
    }

    return 1;
}


bool validPalindrome(string s) {
    
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
    	if (s[i] != s[j])
        {
            if (isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1)) return 1;
            else return 0;
        }
        i++, j--;
    }

    return 1;
}

int main()
{
    wasif();
    string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
    cout << validPalindrome(s) << "\n";

    return 0;
}