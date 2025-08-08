#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand(int a, int b) { return a + ((rng()) % (b - a + 1)); }

int query(int i) {
    cout << "? " << i << endl;
    int response;
    cin >> response;
    return response;
}

int main() {
    int n;
    cin >> n;

    int ans = -1;

    for (int i = 0; i < 20; i++) {
        int j = rand(1, n);
        int response = query(j);

        if (response == 1) {
            ans = j;
            break;
        }
    }

    cout << "! " << ans << endl;

    return 0;
}