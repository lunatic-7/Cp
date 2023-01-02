#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    // initializing a pair with first value as int and second as string.
    pair<int, string> p;
    
    // two ways to put values in pairs
    // p = make_pair(2, "abc");
    p = {2, "abcd"};

    // printing first and second value of pair
    cout << p.first << " " << p.second << "\n";
    
    // taking user input in pair   
    cin >> p.first >> p.second;
    // printing first and second value of pair
    cout << p.first << " " << p.second << "\n";

    // copying a pair in other pair
    pair<int, string> p1 = p;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    // initializing an array of pairs
    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};
    
    // swapping first pair with last pair in array
    swap(p_arr[0], p_arr[2]);
    
    // printing array of pair
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << "\n";
    }
    
    // Another way to print array of pair
    for (auto x : p_arr)
    {
        cout << x.first << " " << x.second << "\n";
    }
    
    return 0;
}