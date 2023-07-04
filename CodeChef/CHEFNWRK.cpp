#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void work()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    vector<ll>::iterator it1, it2;
  
    int temp;

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
        maxi = max(maxi, temp);
    }


    if (maxi > k)
    {
        cout << - 1 << "\n";
    }
    else
    {
        ll count = 0;
        while (v.size() != 0)
        {
            int ger = 0, kika = 0;
            for (int i = 0; i < v.size(); i++)
            {
                kika += v[i];
                if (kika > k)
                {
                    count++;
                    ger = v.size() - i;
                    break;
                }
                else if (i == v.size() - 1)
                {
                    count++;
                    ger = v.size() - (i + 1);
                    break;
                }
                
            }    
            it1 = v.begin();
            it2 = v.end() - ger;

            v.erase(it1, it2);
        }
        
        cout << count << "\n";
    }
}
    
    
int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        work();
    }
    
    return 0;
}