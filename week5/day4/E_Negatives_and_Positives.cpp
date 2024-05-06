#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll minus = 0, mn = LLONG_MAX, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                minus++;
            sum += abs(v[i]);
            mn = min(mn, abs(v[i]));
        }
        if (minus % 2 == 1)
            sum -= (2 * mn);
        cout << sum << endl;
    }

    return 0;
}