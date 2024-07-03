#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);

    for (auto &&i : v)
    {
        cin >> i;
    }

    set<ll> s;
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        while (s.count(v[r]))
        {
            s.erase(v[l]);
            l++;
        }
        s.insert(v[r]);
        ans = max(ans, (ll)s.size());
        r++;
    }
    cout << ans << endl;

    return 0;
}