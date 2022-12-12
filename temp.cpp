#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(vector<ll> nums, vector<ll> output, int index, vector<vector<ll>> &ans)
{
    // Base case
    if (index >= nums.size())
    {
        // int chk = 0;
        ans.push_back(output);
        cout << ans.back() << "\n";
        

        return;
    }

    // Exclude
    solve(nums, output, index + 1, ans);

    // Include
    int element = nums[index];
    output.push_back(element);
    cout << output.back() << "\n";
    // int chk = 0;
    // if (output.back() % k == 0)
    // {
    //     chk = 1;
    //     return;
    // }
    // mul = 1;
    solve(nums, output, index + 1, ans);
}

void divk()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> nums;
    int chk = 0;
    ll temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    vector<vector<ll>> ans; // 2D dynamic array
    vector<ll> output;      // an empty array for now {}
    int index = 0;
    solve(nums, output, index, ans);
    ll mul = 1;

    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    // printing answer
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     // cout << "[";
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         temp = ans[i][j];
    //         // cout << temp;
    //         while (temp > 0)
    //         {
    //             mul *= (temp % 10);
    //             // cout << mul << " ";
    //             temp = temp / 10;
    //         }
    //     }
    //     // cout << mul << "\n";
        
    //     // cout << " ";
    // }

    // if (chk)
    // {
    //     cout << "YES" << "\n";
    // }
    // else
    // {
    //     cout << "NO" << "\n";
    // }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        divk();
    }
    
    
    return 0;
}