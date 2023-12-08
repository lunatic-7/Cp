#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int n;
    cin >> n;
    unordered_map<string, int> shape;

    shape.insert({"Tetrahedron", 4});
    shape.insert({"Cube", 6});
    shape.insert({"Octahedron", 8});
    shape.insert({"Dodecahedron", 12});
    shape.insert({"Icosahedron", 20});

    int ct = 0;

    string temp;
    for (int i = 0; i < n; ++i)
    {
    	cin >> temp;
    	ct += shape[temp];
    }

    cout << ct << "\n";
    return 0;
}