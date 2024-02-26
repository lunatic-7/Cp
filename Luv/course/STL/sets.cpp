#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void setPrint(set<string> &s)
{
    // Printing size of a set
    cout << s.size() << "\n";

    // printing set
    for (auto &x : s)
    {
        cout << x << "\n";
    }
}

int main()
{
    wasif(); 
    
    // initializing a set
    // Set is same as map, remove all values from a map and keep only keys, it's a set now.
    set<string> s;

    // Inserting values in set
    s.insert("abc");  // O(log(n))
    s.insert("def"); 
    s.insert("ghi");  
    s.insert("xyz");  
    
    // If we try to add the same value which already exists in set, it wont get added as set stores unique value only
    s.insert("xyz");

    setPrint(s);

    // find() function takes a value and returns an iterator corresponding to it
    // if there is no value corresponding to it, it return end() iterator.  
    auto it = s.find("xyzk");  // O(log(n))
    if (it == s.end())
    {
        cout << "No Value" << "\n";
    }
    else
    {
        cout << *it << "\n";
    }

    // erase() function takes a value or it iterator and removes that value if that exist.

    s.erase("ghi");
    setPrint(s);

    // clear() clears the whole set
    s.clear();
    setPrint(s);

    // Note : Set stores unique value only, and are stored in a sorted manner.

    /*
    ######## UNORDERED SET #########

    set works internally on trees (red black trees) and have complexity of O(log(n)).
    whereas,
    unordered_set works internally on Hash tables and have complexity of O(1), but it
    doesn't store values in sorted manner.
    It's implementation is:
    unordered_set<string> s;
    rest of its functions and code is same like sets.

    ######## MULTISET #########

    their working is same as of sets. The difference
    is just that they can store duplicate values as well.
    It's implementation is:
    multiset<string> s;
    rest of its functions and code is same like sets.
    */

    // Note : If we use erase() in multiset by directly giving a value to it like this s.erase("ghi") it will 
    // remove all the occurances of "ghi" in multiset. But If you want to remove only its first occurance
    // then we have to use erase() function with the it iterator like this s.erase(it)

    return 0;
}