#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    vector<int> v = {2, 3, 4, 5};

    // iterating vector in short way
    // i makes a copy of elements of vector here, if we want to manipulate
    // original vector inside this loop then we have to use 
    // refrences like this &i;
    for (int i : v) 
    {
        cout << i << "\n";
    }
    
    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};

    // iterating vector of pairs in short way
    for (pair<int, int> &i : v_p)  // passing by refrence here
    {
        cout << i.first << " " << i.second << "\n";
    }

    // auto keyword -> It automatically determines what type
    // of datatype we are using, this is often used in range based loops.
    auto a = 10;
    cout << a << "\n";
    auto b = 10.70;
    cout << b << "\n";
    auto c = "Hello bro!";
    cout << c << "\n";

    // iterating vector of pairs using auto
    for (auto &i : v_p)
    {
        cout << i.first << " " << i.second << "\n";
    }

    return 0;
}