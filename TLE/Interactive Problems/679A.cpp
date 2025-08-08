#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

string query(int x)
{
    cout << x << endl;
    string response;
    cin >> response;
    return response;
}

void answer(string x)
{
    cout << x << endl;
}

int main()
{
	wasif();

	vector<int> primeSq;
	bool chk = 1;

	for (int i = 2; i <= 50; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0) chk = 0;
		}
		if (chk) primeSq.PB(i);
		chk = 1;
	}

    for (int i = 0; i < primeSq.size(); ++i)
    {
        if (primeSq[i] * primeSq[i] < 50) primeSq.PB(primeSq[i] * primeSq[i]); 
    }

	int cnt = 0;

    for (int i = 0; i < 20; ++i)
    {
    	string response = query(primeSq[i]);

    	if (response == "yes") cnt++;
    }

    if (cnt == 0 || cnt == 1) answer("prime");
    else answer("composite");

    return 0;
}