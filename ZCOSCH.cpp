#include <bits/stdc++.h>

using namespace std;
#define ll long long

void scho()
{
    int R;
    cin >> R;

    if (R >= 1 && R <= 50)
    {
        cout << 100 << "\n";
    }
    else if (R >= 51 && R <= 100)
    {
        cout << 50 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    scho();
  
    return 0;
}