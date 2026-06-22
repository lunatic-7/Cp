#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}


class StockSpanner {
    stack<pair<int, int>> st;

public:
    StockSpanner() {}
    
    int next(int price) {

        int cnt = 1;
        while (!st.empty() && st.top().F <= price)
        {
            cnt += st.top().S;
            st.pop();
        }
        st.push({price, cnt});

        return cnt;
    }
};


int main() {

    // Your StockSpanner object will be instantiated and called as such:
    StockSpanner* obj = new StockSpanner();
    obj->next(70);
    obj->next(80);
    obj->next(60);
    obj->next(75);
    int param_1 = obj->next(85);

    cout << param_1 << "\n";
    return 0;
}

 