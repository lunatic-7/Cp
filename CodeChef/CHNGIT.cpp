#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void move()
{
        int N;
        cin >> N;
        int A[N];
        int freq[101] = {0};  // This means initializing all array elements with zero
        
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
            freq[A[i]]++;
        }

        sort(freq,freq+101);
        cout<< N - freq[100] << endl;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        move();
    }
    
    return 0;
}