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
 

int findPeak(vector<int>& mountainArr)
{
	int low = 1, high = mountainArr.size() - 2;
	int peak = 0;

	// O(log(n))
	while (low <= high)
	{
		int m = (high + low) / 2;
		int left = mountainArr[m - 1];
        int mid = mountainArr[m];
        int right = mountainArr[m + 1];

        if (left < mid && mid < right) low = m + 1;
        else if (left > mid && mid > right) high = m - 1; 
        else 
        {
            peak = m;
            break;
        }
	}

	return peak;
}


int findInMountainArray(int target, vector<int>& mountainArr) 
{
	int peak = findPeak(mountainArr);

	// find in left side of peak O(log(n))
	int lowl = 0, highl = peak;
	while (lowl <= highl)
	{
		int midl = (lowl + highl) / 2;
		if (mountainArr[midl] == target) return midl;
		else if (mountainArr[midl] < target) lowl = midl + 1;
		else highl = midl - 1;
	}

	// find in right side of peak O(log(n))
	int lowr = peak, highr = mountainArr.size() - 1;
	while (lowr <= highr)
	{
		int midr = (lowr + highr) / 2;
		if (mountainArr[midr] == target) return midr;
		else if (mountainArr[midr] < target) highr = midr - 1;
		else lowr = midr + 1;
	}

	return -1;
}


int main()
{
    wasif();
    vector<int> mountainArr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82};
    int target = 101;

    int peak = findPeak(mountainArr);
    cout << peak << "\n";

    cout << findInMountainArray(target, mountainArr) << "\n";

    return 0;
}