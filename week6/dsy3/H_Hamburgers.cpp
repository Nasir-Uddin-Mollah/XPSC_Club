#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll ru;
    cin >> ru;

    ll b = 0, S = 0, c = 0;
    for (auto &&i : s)
    {
        if (i == 'B')
            b++;
        else if (i == 'S')
            S++;
        else
            c++;
    }

    auto ok = [&](ll mid)
    {
        ll x = max(0ll, b * mid - nb);
        ll y = max(0ll, S * mid - ns);
        ll z = max(0ll, c * mid - nc);

        ll price = (pb * x) + (ps * y) + (pc * z);
        return price <= ru;
    };

    ll l = 0, r = 1e13, ans = 0, mid;
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