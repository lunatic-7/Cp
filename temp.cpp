#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    string temp = "123";
    int temp2[10];
    
    for (int i = 0; i < 3; i++)
    {
        temp2[i] = (int) temp[i] - 48;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << temp2[i] << " ";
    }
    
    
    return 0;
}