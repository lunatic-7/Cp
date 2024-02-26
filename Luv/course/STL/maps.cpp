#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mapPrint(map<int, string> &m)
{
    // Printing size of a map
    cout << m.size() << "\n";

    // printing map
    for (auto &x : m)
    {
        cout << x.first << " " << x.second << "\n";
    }
}

int main()
{
    wasif();
    
    // initializing a map
    map<int, string> m;

    // Inserting values in map
    m[1] = "abc";  // O(log(n))
    m[5] = "def";
    m[2] = "ghi";
    m[9] = "xyz";

    // Another way to insert value in a map
    m.insert({7, "mano"});
    
    // If we try to add the same key which already exists, it will replace the previous key
    m[9] = "temp";

    mapPrint(m);

    // find() function takes a key and returns an iterator corresponding to it
    // if there is no key corresponding to it it return end() iterator.  
    auto it = m.find(10);  // O(log(n));
    if (it == m.end())
    {
        cout << "No Value" << "\n";
    }
    else
    {
        cout << it->first << " " << it->second << "\n";
    }

    // erase() function takes a key or it iterator and removes that key value pair if that exist.
    m.erase(2);
    mapPrint(m);

    // clear() clears the whole map
    m.clear();
    mapPrint(m);

    // Note : Map stores unique keys only, and are sorted according to their keys.

    /*
    ######## UNORDERED MAP #########

    map works internally on trees (red black trees) and have complexity of O(log(n)).
    whereas,
    unordered_map works internally on Hash tables and have complexity of O(1), but it
    doesn't store keys in sorted manner.
    It's implementation is:
    unordered_map<int, string> m;
    rest of its functions and code is same like maps.

    ######## MULTIMAP #########

    they are not often used in CP. Their working is same as of maps. The difference
    is just that they can store duplicate keys as well.
    It's implementation is:
    multimap<int, string> m;
    rest of its functions and code is same like maps.
    */

    return 0;
}