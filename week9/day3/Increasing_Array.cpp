#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans += (v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }

    cout << ans << endl;

    return 0;
}