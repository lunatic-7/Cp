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

    // 10:00 -> 10 * 60 + 00 == 600 in mins
    // 11:00 -> 11 * 60 + 00 == 660 in mins
    // half of total mins = (600 + 660) / 2 ==> 1260 / 2 ==> 630 mins
    // convert this 630 to hr ans min
    // hr = 630 / 60 ==> 10 hr 
    // min = 630 % 60 ==> 30 mins 
    int h1, m1, h2, m2;
    char c;
    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;

    int mins1 = h1 * 60 + m1;
    int mins2 = h2 * 60 + m2;
    int halfTime = (mins1 + mins2) / 2;

    int ansh, ansm;
    ansh = halfTime / 60;
    ansm = halfTime % 60;

    if (ansh < 10 && ansm < 10)
    {
    	cout << "0" <<  ansh << ":"  << "0" << ansm << "\n";
    }
    else if (ansh < 10)
    {
    	cout << "0" <<  ansh << ":" << ansm << "\n";
    }
    else if (ansm < 10)
    {
    	cout << ansh << ":"  << "0" << ansm << "\n";
    }
    else cout << ansh << ":" << ansm << "\n";

    return 0;
}