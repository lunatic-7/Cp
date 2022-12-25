#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    // putting elements in a dynamic array
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);

    // getting elements from their indexes
    cout << "Getting elements from their indexes \n";
    cout << v[0] << "\n";
    cout << v[1] << "\n";
    cout << v[2] << "\n";

    // getting elements using for loop
    cout << "Getting elements using for loop \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    // a shorter way to iterate a vector
    cout << "A shorter way to iterate a vector \n";
    for (auto x : v)
    {
        cout << x << "\n";
    }

    // back returns the last element from a vector
    cout << "Function back() returns the last element from a vector \n";
    cout << v.back() << "\n";

    // pop_back removes the last element from a vector
    cout << "Function pop_back() removes the last element from a vector \n";
    v.pop_back();
    cout << v.back() << "\n";

    // Some other ways to create a vector

    // creates a vector k with 5 elements in it.
    vector<int> k = {2, 3, 4, 5, 1};

    // creates a vector of size 10 with initial value 0
    vector<int> l(10);

    // creates a vector of size 10 with initial value 5 in all 10 positions
    vector<int> m(10, 5);
    
    return 0;
}