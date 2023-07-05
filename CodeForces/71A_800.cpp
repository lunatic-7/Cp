#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int T;
    cin >> T;
    while(T--)
    {
    	string word, ans;
    	cin >> word;

    	if (word.size() > 10) ans += word[0] + to_string(word.size() - 2) + word[word.size() - 1];
    	else ans = word;

    	cout << ans << "\n";
    }

    return 0;
}