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
 

void countSort(vector<int>& people)
{
	// find max element;
	int maxi = people[0];
	for (int i = 1; i < people.size(); ++i)
	{
		maxi = max(people[i], maxi);
	}

	vector<int> count(maxi + 1, 0);
	// put freq of each number at their number's index
	for (int i = 0; i < people.size(); ++i)
	{
		count[people[i]]++;
	}

	// changing in same vector so, no need to return
	int i = 0, j = 1;
	while (j <= maxi)
	{
		if (count[j]--)
		{
			people[i] = j;
			i++;
		}
		else j++;
	}
}


int numRescueBoats(vector<int>& people, int limit) {
    
    // sort(people.begin(), people.end());

    countSort(people);
    int left = 0, right = people.size() - 1;
    int boat = 0;
    while (left <= right)
    {
    	if (people[left] + people[right] > limit)
    	{
    		boat++;
    		right--;
    	}
    	else
    	{
    		boat++;
    		right--, left++;
    	}
    }

    return boat;
}

int main()
{
    wasif();
    vector<int> people = {1, 3, 2, 3, 2};
    int limit = 3;

    cout << numRescueBoats(people, limit) << "\n";

    return 0;
}