#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        s.insert(t);
    }
    while (m--)
    {
        ll x;
        cin >> x;
        auto it = s.upper_bound(x);
        if (it == s.begin())
            cout << -1 << endl;
        else
        {
            it--;
            cout << *it << endl;
            s.erase(it);
        }
    }

    return 0;
}