#include <iostream>

using namespace std;

void tLeft(int T)
{
    int N, A, B;
    for (int i = 0; i < T; i++)
    {
        int total;
        cin >> N >> A >> B;
        total = (2 * (180 + N)) - (A + B);
        cout << total << "\n";
    }
}

int main()
{
    int T;
    cin >> T;

    tLeft(T);
    return 0;
}