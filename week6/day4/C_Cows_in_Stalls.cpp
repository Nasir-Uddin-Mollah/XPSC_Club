#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }

    auto ok = [&](ll mid)
    {
        ll seg = 1;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            while (j < n && v[i] + mid > v[j])
                j++;
            if (j == n)
                break;
            seg++;
            i = j - 1;
        }
        return seg >= k;
    };
    ll l = 0, r = 1e9 + 100, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
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