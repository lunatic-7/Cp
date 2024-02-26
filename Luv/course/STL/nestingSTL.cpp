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
    // Nesting

    /*
        Let's suppose we have to take input like this:
        3  // Test Cases
        a b 4  // first name, last name, no of subjects
        1 2 3 4  // marks in each subjects respectively
        d f 3
        2 3 4
        c d 2
        1 2
    */

    // How a pair is sorted as a map's key: 
    // first element of each pair is checked whichever is smaller comes first if two of them are equal
    // then next elements of both of them are checked
    // ex: 
    // 2 3 and 2 4
    // so, here 1st element of both the pairs is same, so comparison comes to second elements of pair
    // and as they are different, key of map get sorted according to them.
    // like this: 
    // 2 3
    // 2 4
    // Same process follows for vector and set if they are used as a key in map.

    // defining a map with pair as a key and vector as a value
    map<pair<string, string>, vector<int>> m;

    // no of inputs we want to take in map
    int n;
    cin >> n;
    
    // Taking input in map
    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        int ct;
        // taking first name, last name and no of subjects as an input
        cin >> fn >> ln >> ct;
        // taking marks of each subjects
        for (int j = 0; j < ct; j++)
        {
            int x;
            cin >> x;
            m[{fn, ln}].PB(x);
        }
    }
    
    // printing our nested map (We are passing every data type as a refrence so that no copy of any
    // of them is created as making copies will increase our time complexity.)
    for (auto &pr : m)
    {
        // extracting pair
        auto &full_name = pr.F;
        // extracting vector
        auto &list = pr.S;
        // extracting both values of a pair
        cout << full_name.F << " " << full_name.S << "\n";
        // extracting size of the vector
        cout << list.size() << "\n";
        // printing elements of the vector
        for (auto &element : list)
        {
            cout << element << " ";
        }
        cout << "\n";
    }

    
    
    return 0;
}