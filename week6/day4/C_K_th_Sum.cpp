#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    for (auto &&i : b)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        int i = 0, j = 0;
        while (i < n && j < n)
        {
            if (a[i] + b[j] >= mid)
            {
                j++;
            }
            else
            {
                i++;
                cnt += (n - j);
            }
        }

        return cnt < k;
    };
    ll l = 0, r = 1e11 + 100, ans, mid;
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