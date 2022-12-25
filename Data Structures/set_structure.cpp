#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    // Inserting to a set
    s.insert(3);
    s.insert(2);
    s.insert(5);

    // count occurances of elements
    cout << "Counting occurances of elements \n";
    cout << s.count(3) << "\n";
    cout << s.count(2) << "\n";
    cout << s.count(4) << "\n";

    // erasing occurance of 3 and inserting 4
    cout << "Erasing occurance of 3 and inserting 4 \n";
    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n";
    cout << s.count(4) << "\n";

    set<int> k = {2, 4, 5, 7, 0};

    cout << k.size() << "\n";  // get size of a set
    // iterating through all elements of the set, we cannot access set using this [] notation
    cout << "Iterating through all elements of the set \n";
    for (auto x : k)
    {
        cout << x << "\n";
    }

    // set can store unique elements only
    cout << "Set can store unique elements only \n";
    set<int> m;
    m.insert(7);
    m.insert(7);
    m.insert(7);

    cout << m.count(7) << "\n";

    // multiset can store multiple instances of an element
    cout << "Multiset can store multiple instances of an element \n";
    multiset<int> t;

    t.insert(7); 
    t.insert(7); 
    t.insert(7); 

    cout << t.count(7) << "\n"; 
    t.erase(7); // erase removes all the instances of that element from a multiset
    cout << t.count(7) << "\n"; 

    t.insert(9);
    t.insert(9);
    t.insert(9);

    cout << t.count(9) << "\n";
    t.erase(t.find(9)); // to remove only a single instance of an element from a multiset
    cout << t.count(9) << "\n"; 

    return 0;
}