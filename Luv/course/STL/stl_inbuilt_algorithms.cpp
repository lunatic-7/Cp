#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n;  // 6
    cin >> n;  
    vector<int> v(n);  // 2 3 1 6 7 6

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // these all stl inbuit algorithms takes O(n) T.C, and they can 
    // take custom iterators like v.begin() + 2 or v.end() - 3 etc.

    // min_element and max_element function returns pointer in case of array,
    // and iterator in case of vector.
    // auto it = min_element(v.begin(), v.end());
    // cout << *it << "\n";

    // Another way of writing upper code
    int min = *min_element(v.begin(), v.end()); 
    cout << min << "\n";  // 1
    int max = *max_element(v.begin(), v.end());
    cout << max << "\n";  // 7
    
    // accumulate() function gives the sum of an array or vector
    // syntax - accumulate(starting_iterator, ending_iterator, initial_sum)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << "\n";  // 25

    // count() function gives the count of an element in an array or vector
    // syntax - count(starting_iterator, ending_iterator, element)
    int ct = count(v.begin(), v.end(), 2);
    cout << ct << "\n";  // 1

    // find() function simply checks if that element is present in that
    // array or vector and if yes then it returns a pointer or iterator
    // of that element only, else give next to last iterator (v.end())
    auto it = find(v.begin(), v.end(), 2);
    if (it != v.end())
    {
        cout << *it << "\n";  // 2
    }
    else
    {
        cout << "Element not found" << "\n";
    }

    // reverse() function simply reverses the array or vector
    reverse(v.begin(), v.end());
    for (auto val : v)
    {
        cout << val << " ";  // 6 7 6 1 3 2
    }
    cout << "\n";
    
    return 0;
}