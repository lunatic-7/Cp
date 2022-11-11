#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void jeff()
{
    int temp;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            count++;
        }
    }

    if (count == 5)
    {
        cout << "Jeff Dean" << "\n";
    }
    else if (count == 4)
    {
        cout << "Hacker" << "\n";
    }
    else if (count == 3)
    {
        cout << "Senior Developer" << "\n";
    }
    else if (count == 2)
    {
        cout << "Middle Developer" << "\n";
    }
    else if (count == 1)
    {
        cout << "Junior Developer" << "\n";
    }
    else
    {
        cout << "Beginner" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        jeff();
    }
    
    return 0;
}