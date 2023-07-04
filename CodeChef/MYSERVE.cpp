#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ab()
{
    int p, q;
    cin >> p >> q;
    if((p + q) % 4 == 0 || (p + q - 1) % 4 == 0) 
    {
        cout<<"Alice"<<endl;
    }
	else
    { 
        cout<<"Bob"<<endl;
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ab();
    }
    
    return 0;
}