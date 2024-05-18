#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll k, n;
    cin >> k >> n;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }

    auto ok = [&](ll mid)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > mid)
                sum += mid;
            else
                sum += v[i];
        }
        return (sum / mid) >= k;
    };

    ll l = 0, r = 25 * 1e9 + 5, ans, mid;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;

    return 0;
}