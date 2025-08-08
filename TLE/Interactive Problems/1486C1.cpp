#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;


int query(int x, int y)
{
    cout << "? " << x << " " << y << endl;

    int response;
    cin >> response;

    return response;
}

void answer(int x)
{
	cout << "! " << x << endl;
}


int binarySearch(const int secondLargest, int low, int high)
{
	if (low == high) return low;
	// if searching in left region
	if (high < secondLargest)
	{
		int mid = (low + high + 1) / 2;
		int response = query(mid, secondLargest);
		if (response == secondLargest) low = mid;
		else high = mid - 1;
	}

	// if searching in right region
	else
	{
		int mid = (low + high) / 2;
		int response = query(secondLargest, mid);
		if (response == secondLargest) high = mid;
		else low = mid + 1;
	}

	return binarySearch(secondLargest, low, high);
}

int main()
{
    wasif();

	int n;
	cin >> n;

	int secondLargest = query(1, n);

	// Assuming largest element is to the right of seond largest element
	bool maxIsLeft = 1;

	if (secondLargest == 1) maxIsLeft = 0;
	else
	{
		int response = query(1, secondLargest);
		if (response != secondLargest)
			maxIsLeft = 0;
	}

	int largest = -1;
	if (maxIsLeft) largest = binarySearch(secondLargest, 1, secondLargest - 1);
	else largest = binarySearch(secondLargest, secondLargest + 1, n);

	answer(largest);
    return 0;
}