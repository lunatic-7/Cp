#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    wasif();
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    vector<int> nge = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << "\n";
    }
    
    return 0;
}