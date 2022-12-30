/*
Given array a of N integers. Given Q queries and in each query
given a number X, print count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
    
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         int ct = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == x)
//             {
//                 ct++;
//             }
//         }
//         cout << ct << "\n";
//     }
    
//     // It's time complexity is :
//     // O(N) + O(Q*N) == O(N^2) = 10^10
//     // So, it will give TLE

//     return 0;
// }

// We can prevent our solution from TLE, by using hashing
// hashing is storing values beforehand testing our test cases
// eg:

#include <bits/stdc++.h>

using namespace std;
const int N = 1e7+10;
int hsh[N];  // We don't need to initialize it with 0,
// Global arrays are by default initialized with zero.

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        
        cout << hsh[x] << "\n";
    }
    
    // It's time complexity is :
    // O(N) + O(Q) == O(N) = 2*10^5
    // It won't give TLE now.
    
    return 0;
}