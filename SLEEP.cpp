#include <iostream>

using namespace std;

int main()
{
    int T;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int sd;
        cin >> sd;
        if (sd < 7)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}