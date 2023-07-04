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

    while (T--)
    {
    	double x1, y1, x2, y2;
    	cin >> x1 >> y1 >> x2 >> y2;

    	double alex = sqrt(pow(x1, 2) + pow(y1, 2));
    	double bob = sqrt(pow(x2, 2) + pow(y2, 2));

    	if (alex == bob) cout << "EQUAL\n";
    	else if (alex > bob) cout << "ALEX\n";
    	else cout << "BOB\n";
    }
    return 0;
}