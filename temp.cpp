#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int arr[] = {1,2,3,4,5,5,6};
    int x = 5;
    auto k = upper_bound(arr, arr + sizeof(arr)/sizeof(int), x);
    cout << k;
    return 0;
}