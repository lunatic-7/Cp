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
    
    // If we try to add the same key, it will replace the previous key, map stores unique key only
    m[9] = "temp";

    mapPrint(m);

    // This is how we use find() function, find() takes a key and returns an iterator corresponding to it
    // if there id no key corresponding to it it return end() iterator.  
    auto it = m.find(10);  // O(log(n));
    if (it == m.end())
    {
        cout << "No Value" << "\n";
    }
    else
    {
        cout << it->first << " " << it->second << "\n";
    }

    // erase() function takes a key or it iterator and removes that key value pair if that exist;
    m.erase(2);
    mapPrint(m);

    // clear() clears the whole map
    m.clear();
    mapPrint(m);

    // Note : Map stores unique key only, and in sorted manner according to their keys.

    return 0;
}