#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(1);

    set<int>::iterator it = s.begin();  // returns smallest element from set s
    cout << *it << "\n";  // * is used to get the value

    auto it_2 = s.begin();  // a shorter way to write line 13
    cout << *it_2 << "\n";

    // prints all the elements in increasing order
    for (auto it_3 = s.begin(); it_3 != s.end(); it_3++)
    {
        cout << *it_3 << "\n";
    }

    // prints largest element in the set
    auto it_4 = s.end(); it_4--;
    cout << *it_4 << "\n";

    // find() function to find an element in the set, however if the element is not found
    // it will return the s.end()
    auto it_5 = s.find(2);

    if (it_5 == s.end())
    {
        cout << "Element is absent" << "\n";
    }
    else
    {
        cout << "Element is present" << "\n";
    }

    return 0;
}