#include <iostream>

using namespace std;

void four(int T)
{
    for (int i = 0; i < T; i++)
    {
        string num;
        int count = 0;
        cin >> num;

        for (int i = 0; i < num.length(); i++)
        {
            if (num[i] == '4')
            {
                count += 1;
            }
        }
        cout << count << "\n";
    }
}

int main()
{
    int T;
    cin >> T;

    four(T);
    return 0;
}