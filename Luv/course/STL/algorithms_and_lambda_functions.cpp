#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    // Lambda function is just a shorter way of writing a function
    
    // Eg: This is a lambda function to add two numbers
    auto sum = [](int x, int y){return x + y;};
    cout << sum(7, 4) << "\n";  // 11

    // all_of  -> Checks if all the elements satisfies the given condition 
    // any_of  -> Checks if any element satisfies the given condition 
    // none_of  -> Checks if none of the elements satisfies the given condition 
    // They all give a boolean value in return (0 , 1)

    vector<int> v = {2, -4, 7};
    cout << all_of(v.begin(), v.end(), [](int x){return x > 0;}) << "\n";  // 0
    cout << any_of(v.begin(), v.end(), [](int x){return x > 0;}) << "\n";  // 1
    cout << none_of(v.begin(), v.end(), [](int x){return x > 0;}) << "\n";  // 0

    return 0;
}