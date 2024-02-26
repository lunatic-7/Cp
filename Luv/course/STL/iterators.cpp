#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    
    vector<int> v = {2, 3, 5, 6, 7};

    // Printing v vector using iterators,
    // This iterator works like a pointer for STL
    // v.begin() points to first element of vector and
    // v.end() points to next to last element of vector.

    // Defining a iterator for vector
    vector<int> ::iterator it = v.begin();
    cout << *(it) << "\n";  // 1st element
    cout << *(it + 1) << "\n";  // 2nd element

    // Here, we can use it + 1, because there is continuous mememory
    // allocation in vector so we can access next element like that,
    // but it is preferred to use it++ or ++it as it works in maps,
    // sets etc as well

    // printing a vector using iterators
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "\n";
    }

    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};

    // Defining a iterator for vector of pairs 
    vector<pair<int, int>> ::iterator it_2;
    // printing vector of pairs using iterators
    for (it_2 = v_p.begin(); it_2 != v_p.end(); it_2++)
    {
        cout << (*it_2).first << " " <<  (*it_2).second << "\n";
    }

    // We can replace (*it).first <==> it->first

    // Another way to print vector of pairs using iterators
    for (it_2 = v_p.begin(); it_2 != v_p.end(); it_2++)
    {
        cout << it_2->first << " " <<  it_2->second << "\n";
    }
    
    return 0;
}