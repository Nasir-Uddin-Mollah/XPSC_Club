#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll sum = 0;
    for (auto &&i : v)
    {
        cin >> i;
        sum += i;
    }

    auto ok = [&](ll mid)
    {
        ll seg = 1, total = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > mid)
            {
                flag = false;
                break;
            }
            if (total + v[i] <= mid)
                total += v[i];
            else
            {
                total = v[i];
                seg++;
            }
        }
        if (flag)
            return seg <= k;
        else
            return false;
    };
    ll l = 0, r = sum + 100, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;

    return 0;
}