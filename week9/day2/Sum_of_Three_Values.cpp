#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x;
    cin >> n >> x;

    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());

    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x2 = x - v[i].first;
        ll k = n - 1;
        bool found = false;
        for (ll j = i + 1; j < k; j++)
        {
            while (v[j].first + v[k].first > x2)
            {
                k--;
            }
            if (j < k and v[j].first + v[k].first == x2)
            {
                found = true;
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                ans.push_back(v[k].second);
                break;
            }
        }
        if (found)
            break;
    }
    if (ans.empty())
        cout << "IMPOSSIBLE\n";
    else
    {
        sort(ans.begin(), ans.end());
        for (auto &&i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}