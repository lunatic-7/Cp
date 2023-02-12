// SPOJ WEBSITE (Question name -> EKO) Using Binary search
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Defining these Globally so that, we don't need to pass them in functions.
const int N = 1e6 + 10; // Maximum possible no. of trees
int n;  // No of trees (Given)
ll m;  // Amount of wood required
ll trees[N];

bool isWoodSufficient(int h){
    ll wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] >= h)
        {
            wood += trees[i] - h;
        }
    }
    // if (wood >= m)
    // {
    //     return true;
    // }
    // return false;
    
    // Short form of upper code    
    return wood >= m;
}

void binSearch()
{
    ll lo = 0, hi = 1e9; // Maximum possible height of a tree
    ll mid;

    // We have to find the occurance of last True, eg:
    // If we have T T T T F F F, then we have to find the occurance of last True, bc
    // we have to give the maximum height possible to acquire the required wood in the question.
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (isWoodSufficient(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (isWoodSufficient(hi))  // First check for high as we want the maximum height
    {
        cout << hi << "\n";
    }
    else
    {
        cout << lo << "\n";
    }
}

int main()
{
    wasif();
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }

    binSearch();
    
    return 0;
}