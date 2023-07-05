// UNSOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n, k;
    cin >> n >> k;
    string fromchk[n];
    string tochk;

    for (int i = 0; i < n; i++)
    {
        cin >> fromchk[i];
    }

    while (k--)
    {
        cin >> tochk;
        if (tochk.size() >= 47) 
        {
            cout << "Good" << "\n";
        }
        else
        {
            for (int i = 0; i < fromchk.size(); i++)
            {
                for (int j = 0; j < fromchk[i].size(); j++)
                {
                    cout << [i][j]
                }
                
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << fromchk[i] << " ";
    }
  
    
    return 0;
}