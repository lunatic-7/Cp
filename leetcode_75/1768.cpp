#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    
    string word1, word2;
    cin >> word1 >> word2;

    string fword = "";
    int lsize = max(word1.size(), word2.size());
    int i = 0, j = 0;
    while (lsize--)
    {
    	if (i < word1.size()) fword += word1[i];
    	if (j < word2.size()) fword += word2[j];
    	i++, j++;
    }

    cout << fword << "\n";

    return 0;
}