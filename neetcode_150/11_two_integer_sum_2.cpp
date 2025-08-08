#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    vector<int> numbers = {2, 3, 4};
    int target = 6;

    int sz = numbers.size();

    int i = 0, j = sz - 1;
    while (i < j)
    {
    	if (numbers[i] + numbers[j] > target) j--;
    	else if (numbers[i] + numbers[j] < target) i++;
    	else break;
    }

    vector<ll> answer = {i + 1, j + 1};
    showVect(answer);

    return 0;
}