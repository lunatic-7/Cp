#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void traverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {4, 2, 1, 3, 43, 92, 7, 0, 3, 10};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr + size);
    traverse(arr, size);

    reverse(arr, arr + size);
    traverse(arr, size);

    random_shuffle(arr, arr + size);
    traverse(arr, size);

    return 0;
}