#include <iostream>

using namespace std;

void nNegative(int T)
{

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int non = 0;

        int Arr[N];

        // Taking N inputs in an array
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }

        // Cheking how many non negative no's are there
        for (int i = 0; i < N; i++)
        {
            if (Arr[i] == 0)
            {
                non = 0;
                break;
            }

            else if (Arr[i] < 0)
            {
                non++;
            }
        }

        // If even no or 0 non negative no's print 0 else 1
        if (non % 2 == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
}

int main()
{
    int T;

    cin >> T;
    nNegative(T);
    return 0;
}