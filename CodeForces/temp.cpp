#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    multimap<string, int> st;

    st.insert({"himan", 3});
    st.insert({"himan1", 2});
    st.insert({"himan2", 1});
    st.insert({"himan", 0});

    for (auto x : st)
    {
        cout << x.F << " " << x.S << "\n";
    }
    return 0;
}