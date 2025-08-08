#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int ct0 = count(s.begin(), s.end(), '0');
        int ct1 = n - ct0;
        int m = n / 2 - k;
        bool possible = true;
        
        cout << m << "\n";
        if (ct0 < m || ct1 < m) possible = false;
        else if ((ct0 - m) % 2 != 0 || (ct1 - m) % 2 != 0) possible = false;
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}