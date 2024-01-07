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
    int t;
    cin >> t;

    while (t--)
    {
    	int cards, jokers, log;
    	cin >> cards >> jokers >> log; // 9 6 3

    	int baatna = cards / log; // 9 / 3 = 3 + 3 + 3
    	int arr[log] = {0};
    	int joke = jokers;

    	for (int i = 0; i < log; ++i)
    	{
    		// agar baatna zyda hai jokers se
    		if (baatna > joke)
    		{
    			arr[i] = jokers;
    			jokers -= arr[i];
    		}
    		else
    		{
    			// agar phla player hai
    			if (i == 0)
    			{
    				arr[i] = baatna;
    				// cout << "phla wala " << arr[i] << " " << baatna <<  "\n";
    				jokers -= baatna;
    			}
    			// agar last player hai
    			else if (i == log - 1)
    			{
    				arr[i] = jokers;
    				// cout << "last wala " << arr[i] << " " << jokers << "\n";
    				jokers -= arr[i];
    			}
    			// baaki wala
    			else
    			{
    				arr[i] = jokers / (log - i);
    				// 3 / (3 - (1 + 1))
    				// cout << "baaki wala " << arr[i] << " " << jokers << "\n";
    				jokers -= jokers / (log - i);
    			}
    		}
    	}

        sort(arr, arr + log);

        cout << arr[log - 1] - arr[log - 2] << "\n";
    	// for (int i = 0; i < log; ++i)
    	// {
    	// 	cout << arr[i] << " ";
    	// }
    	// cout << "\n";
    }
    return 0;
}