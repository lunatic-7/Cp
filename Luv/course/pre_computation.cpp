/*
Given T Test cases and in each test case a number N.
Print its factorial for each test case % M
where M = 10^9 + 7

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

// #include <bits/stdc++.h>
// using namespace std;
// const int M = 1e9+7;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long fact = 1;
//         for (int i = 2; i <= n; i++)
//         {
//             fact = (fact * i) % M;
//         }
//         cout << fact << endl;
//     }

//     // Its time complexity is O(T * N) == O(N^2) == 10^10
//     // So, it will give TLE.
        
//     return 0;
// }

// We can prevent our solution from TLE, by using precomputation
// Precomputation is storing values beforehand testing our test cases
// eg:

#include <bits/stdc++.h>

using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % M;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }

    // Its time complexity is O(N) + O(T) = 10^5 + 10^5 == 2 * 10^5
    // It won't give TLE now.
    
    return 0;
}