#include <bits/stdc++.h>
using namespace std;
int n = 1e6;
vector<int> seive()
{
    vector<bool> prime(n + 1, true);
    vector<int> p;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            p.push_back(i);
    }
    return p;
}
int main()
{
    int t;
    cin >> t;
    vector<int> p = seive();
    while (t--)
    {
        int d;
        cin >> d;
        int ans = 1, x = -1;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] - 1 >= d)
            {
                ans *= p[i];
                x = p[i];
                break;
            }
        }
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] - x >= d)
            {
                ans *= p[i];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}