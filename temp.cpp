#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    s = "zbdcdeedfz";
    sort(s.begin(), s.end());

    cout << s << "\n";
    return 0;
}