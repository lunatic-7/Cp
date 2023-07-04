#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void devu()
{
    int N;
    cin >> N;
    int arr[N];
    set<int> s;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    
    cout << s.size() << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        devu();
    }
    
    return 0;
}