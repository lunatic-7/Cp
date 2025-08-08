#include <bits/stdc++.h>
using namespace std;

// ifndef means if not defined
#ifndef ONLINE_JUDGE
bool LOCAL = true;
#else
bool LOCAL = false;
#endif

int testcases = LOCAL ? 1000 : 1;

// Random number generator
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand(int a, int b) { return a + ((rng()) % (b - a + 1)); }

// Interactor (only for local testing) Also known as Stress Testing
struct Interactor
{
    int max_queries = 10;  // Total queries we can make in 1 test case
    int hidden_number, queries_count;

    // Generate a hidden random number and reset queries count
    void init()
    {
        hidden_number = rand(1, 100);
        queries_count = 0;
    }

    // Make a query and return response
    char make_query(int x)
    {
        assert(++queries_count <= max_queries);

        char response;
        if (x == hidden_number)
            response = '=';
        else if (x > hidden_number)
            response = '>';
        else
            response = '<';

        cout << response << endl;
        return response;
    }

    // Check if the answer is correct
    void check_answer(int x)
    {
        if (x == hidden_number)
            cout << "Passed for " << hidden_number << endl;
        else
        {
            cout << "Failed for " << hidden_number << endl;
            exit(1);
        }
    }
} interactor;

char query(int x)
{
    cout << "? " << x << endl;
    if (LOCAL)
        return interactor.make_query(x);
    char response;
    cin >> response;
    return response;
}

void answer(int x)
{
    cout << "! " << x << endl;
    if (LOCAL)
        interactor.check_answer(x);
}

int main()
{

    while (testcases--)
    {
        if (LOCAL)
            interactor.init();

        // Binary Search
        int l = 1, r = 100, ans = -1;

        while (l <= r)
        {
            int m = (l + r) / 2;
            char response = query(m);

            if (response == '=')
            {
                ans = m;
                break;
            }

            if (response == '<')
                l = m + 1;
            else
                r = m - 1;
        }

        answer(ans);
    }

    return 0;
}