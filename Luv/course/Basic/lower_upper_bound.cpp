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
    int n;
    cin >> n; // 6

    int arr[n];  // 4 5 5 25 7 8
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // To make lower bound and upper bound work efficiently in O(log(n)) operation we have to
    // give it a sorted array or sorted vector.
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // In case of an array lower bound returns a pointer. If the element which we are trying to find,
    // is present then lower bound returns that element only, or else it returns its next greater element.
    // if the element which we are trying to find is higher than maximum no of array it will return next to last 
    // pointer, arr + n (And if we try to print that it will return a garbage value, so, it is always
    // better to use an if check for that).

    // lower_bound(starting_pointer, ending_pointer, element_to_find)
    int *ptr = lower_bound(arr, arr + n, 5);  // 5 (element which is present)
    // int *ptr2 = lower_bound(arr, arr + n, 6);  // 7 (element which is not present)
    // int *ptr3 = lower_bound(arr, arr + n, 26);  // arr + n (element which exceeds the maximum value)
    if (ptr == arr + n)
    {
        cout << "Not found" << "\n";
    }
    else
    {
        cout << *ptr << "\n";
    }

    // In case of an array upper bound returns a pointer. Upper bound always returns its next greater element.
    // if the element which we are trying to find is higher than maximum no of array it will return next to last 
    // pointer, arr + n (And if we try to print that it will return a garbage value, so, it is always
    // better to use a if check for that).

    // upper_bound(starting_pointer, ending_pointer, element_to_find_next_greater_of)
    int *ptr4 = upper_bound(arr, arr + n, 5);  // 7 (element which is present)
    
    if (ptr4 == arr + n)
    {
        cout << "Not found" << "\n";
    }
    else
    {
        cout << *ptr4 << "\n";
    }

    // Now, in case of vector upper bound and lower bound returns iterator in place of pointer
    // eg;
    /* 
        sort(v.begin(), v.end);
        auto it = lower_bound(v.begin(), v.end(), 5);
        auto it = upper_bound(v.begin(), v.end(), 5);

        if (it == a.end())
        {
            cout << "Not found" << "\n";
        }
        else
        {
            cout << *it << "\n";
        }
    */  

    // In case of sets and maps, we should not use upper bound and lower bound like this:
    // auto it = lower_bound(s.begin(), s.end(), 5);  // It will give TLE on bigger values, T.C = O(n)
    // instead use like this:
    // auto it = s.lower_bound(5);  // T.C = O(log(n))
    return 0;
}