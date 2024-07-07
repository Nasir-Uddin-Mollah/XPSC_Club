#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    ll l = 0, r = 0, ans = 0, sum = 0;
    while (l < n && r < n)
    {
        sum += v[r];
        while (sum > x)
        {
            sum -= v[l];
            l++;
        }

        if (sum == x)
        {
            ans++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}