#include <bits/stdc++.h>

using namespace std;
#define ll long long

void race()
{
    int N;
    cin >> N;
    int A[N];
    int B[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    // check largest num of A
    int maxA = A[0];

    for (int i = 0; i < N; i++)
    {
        if (maxA < A[i])
        {
            maxA = A[i];
        }
    }

    // check largest num of B
    int maxB = B[0];

    for (int i = 0; i < N; i++)
    {
        if (maxB < B[i])
        {
            maxB = B[i];
        }
    }

    // sum of array A
    int sumA = 0;
    for (int i = 0; i < N; i++)
    {
        sumA += A[i];
    }

    // sum of array B
    int sumB = 0;
    for (int i = 0; i < N; i++)
    {
        sumB += B[i];
    }
    
    // cout << min((sumA - maxA), (sumB - maxB)) << "\n";
    if ((sumA - maxA) < (sumB - maxB))
    {
        cout << "Alice" << "\n";
    }
    else if ((sumB - maxB) < (sumA - maxA))
    {
        cout << "Bob" << "\n";
    }
    else
    {
        cout << "Draw" << "\n";
    }    
    
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        race();
    }
    
    return 0;
}