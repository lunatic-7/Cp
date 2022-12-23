#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    vector<int> myvector{ 1, 2, 3, 4, 5 };
    vector<int>::iterator it1, it2;
  
    it1 = myvector.begin();
    it2 = myvector.end() - 2;
    // it2--;
    // it2--;
  
    myvector.erase(it1, it2);

    for (int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << "\n";
    }
    
    return 0;
}