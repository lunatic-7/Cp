#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 

vector<int> twoSum(vector<int>& numbers, int target) {

	int i = 0, j = numbers.size() - 1;
	while (i < j)
	{
		if (numbers[i] + numbers[j] > target) j--;
		else if (numbers[i] + numbers[j] < target) i++;
		else break;
	}

	vector<int> ans = {i + 1, j + 1};
	return ans;
}

int main()
{
    wasif();
    vector<int> numbers = {1, 2, 3, 4};
    int target = 6;
    vector<int> ans = twoSum(numbers, target);
    showVect(ans);


    return 0;
}