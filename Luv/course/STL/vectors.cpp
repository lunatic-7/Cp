#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    
    // initializing a vector
    vector<int> v;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // taking values in vector
        v.push_back(x);  // O(1)
    }

    // removes last element from the vector
    v.pop_back();

    // copying a vector in another vector
    vector<int> v0 = v;  // O(n)   

    // printing vector size
    cout << "size: " << v.size() << "\n";  // O(1)
    
    // printing vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    // this will initialize a 10 size vector with all 0 values;
    vector<int> v1(10);   // 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

    // this will initialize a 10 size vector with all 3 values;
    vector<int> v2(10, 3);   // 3, 3, 3, 3, 3, 3, 3, 3, 3, 3

    /* When we pass a vector in a function like this (vector<int> v) it is passed by value (which means
    it makes a copy if it there), but we should not do that bc copying a vector 
    takes O(n) time. So, we should pass it by refrence like this (vector<int> &v)
    it takes O(1) time to pass a refrence of vector.
    */

    return 0;
}