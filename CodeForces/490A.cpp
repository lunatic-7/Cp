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
    int n;
    cin >> n;

    int arr[n], chk[4] = {0};
    stack<int> one, two, three;
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	if (arr[i] == 1) one.push(i + 1);
    	if (arr[i] == 2) two.push(i + 1);
    	if (arr[i] == 3) three.push(i + 1);
    	chk[arr[i]]++;
    }

    int teams = INT_MAX;
    for (int i = 1; i < 4; ++i)
    {
    	teams = min(teams, chk[i]);
    }

    cout << teams << "\n";
    for (int i = 0; i < teams; ++i)
    {
    	cout << one.top() << " ";
    	one.pop();
    	cout << two.top() << " ";
    	two.pop();
    	cout << three.top();
    	three.pop();
    	cout << "\n";
    }


    return 0;
}