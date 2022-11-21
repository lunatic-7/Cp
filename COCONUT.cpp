#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void coco()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    cout << x/a + y/b << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        coco();
    }
    
    return 0;
}