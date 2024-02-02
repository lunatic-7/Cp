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
    int t;
    cin >> t;

    while (t--)
    {
    	int rating;
    	cin >> rating;

    	if (rating <= 1399) cout << "Division 4" << "\n";
    	else if (rating >= 1400 && rating <= 1599) cout << "Division 3" << "\n";
    	else if (rating >= 1600 && rating <= 1899) cout << "Division 2" << "\n";
    	else if (rating >= 1900) cout << "Division 1" << "\n";
    }
    return 0;
}