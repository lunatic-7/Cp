#include <iostream>

using namespace std;

void faceUpDown(int T) 
{
    for (int i = 0; i < T; i++)
    {
        int N, X;
        cin >> N >> X;

        if ((N - X) > X)
        {
            cout << X << "\n";
        }
        else
        {
            cout << N - X << "\n";
        }
        
    }
    
    
}

int main()
{
    int T;
    cin >> T;
    faceUpDown(T);
    return 0;
}