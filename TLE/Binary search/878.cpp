using ll = long long;
const ll M = 1e9 + 7;

class Solution {
public:

    bool checker(ll mid, int n, int a, int b)
    {
        ll lcm = (a * b)/__gcd(a,b);
        ll cnt = (mid / a) + (mid / b) - (mid / lcm);
        if (cnt >= n) return true;
        return false;
    }

    int nthMagicalNumber(int n, int a, int b) {
        ll left = min(a, b), right = n * 1LL * min(a, b);
        ll ans;
        while (left <= right)
        {
            ll mid = (left + right) / 2;
            if (checker(mid, n, a, b))
            {
                ans = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return ans % M;
    }
};