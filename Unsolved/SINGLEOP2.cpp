// WRONG ANSWER

#include <bits/stdc++.h>

using namespace std;
#define ll long long


// Function to convert binary to decimal
int binToD(int li[], int size)
{
    int dec = 0;

    for (int i = 0; i < size; i++)
    {
        dec += li[i] * pow(2, size - (i + 1));
    }

    return dec;
}

void findY(int tod, int size)
{
    int minTod[size];
    int temp;

    // cout << "Tod: " << tod << "\n";

    for (int i = 0; i < size; i++)
    {
        // finding xor using corresponding y
        temp = floor(tod/pow(2,i + 1));
        minTod[i] = tod ^ temp;;
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << minTod[i] << " ";
    // } 
    // cout << "\n";
    
    // Finding manimum number
    int min = minTod[0];
    for (int i = 0; i < size; i++)
    {
        if (minTod[i] < min)
        {
            min = minTod[i];
        } 
    }

    // Finding y which gives minimum number
    for (int i = 0; i < size; i++)
    {
        if (minTod[i] == min)
        {
            cout << i+1 << "\n";
        }
    }    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    int a;

    while (T--)
    {
        int size;
        cin >> size;
        string li;
        int stIn[size];

        cin >> li;

        // converting string of integers to an array
        for (int i = 0; i < size; i++)
        {
            stIn[i] = (int) li[i] - 48;
        }

        // storing binary to decimal number
        int tod = binToD(stIn, size);
        // finally finding y
        findY(tod, size);
    }

    return 0;
}