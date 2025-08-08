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

// 1 <= n <= 1e9

// if a, b, c are Pythagorean Triples then
// (a^2 - b = c) and (a^2 + b^2 = c^2) should be valid

// a^2 = b + c .... 1

// a^2 = c^2 - b^2
// a^2 = (c + b)(c - b)
// c - b = 1   .... 2

// This means that c and b are next to each other c = b + 1
// eg: b = 3, c = 4
// b + c will always be odd, 
// Therefore, a^2 --> odd, so, a ---> odd

// c = (a^2 + 1) / 2, b = c - 1

// We have to see only odd a's

// a = 3
// 9 = 4 + 5

// a = 5
// 25 = 12 + 13

// We can see that c >>> than a and b always,
// So, we can make a vector on c and find the index to get the size accordingly

// a = 1e5
// as c = (1e10 + 1) / 2 > 1e9

vector<int> v;

void pre()
{
	v.PB(0);  // just for simplicity
	for (ll a = 3; a < 1e5; a+=2)
	{
		ll A = a * a;
		ll b = A / 2;
		ll c = b + 1;

		if (b*b + a*a == c*c && A == b + c) v.PB(c);
	}
}

int main()
{
    wasif();
    pre();
    
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	auto it = upper_bound(v.begin(), v.end(), n);
    	cout << (it - v.begin()) - 1 << "\n";  // - v.begin(); to get the index
    }
    
    return 0;
}