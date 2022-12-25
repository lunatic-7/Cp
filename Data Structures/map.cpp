#include <iostream>
#include <map>

using namespace std;

// Maps in C++ is like dictionary, It consists of key-value pairs

int main()
{
    map<string, int> m;  // Here, keys are string and values are int
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 7;

    cout << m["banana"] << "\n";

    // If the value of a key is requested but the map does not contain it, the key is automatically added
    // with a default value
    cout << m["aybabtu"] << "\n"; // default value = 0

    // Check if a key exists in a map
    if (m.count("aybabtu"))
    {
        cout << "Exists" << "\n";
    }

    // Print all key and values
    for (auto x : m)
    {
        cout << x.first << " " << x.second << "\n";
    }
      
    return 0;
}