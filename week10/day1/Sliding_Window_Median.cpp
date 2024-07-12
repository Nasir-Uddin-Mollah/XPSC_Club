#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    ll l = 0, r = 0;
    pbds<pair<ll, ll>> p;
    while (r < n)
    {
        p.insert({v[r], r});
        if (r - l + 1 == k)
        {
            ll mid = k / 2;
            if (k % 2 == 0)
                mid--;
            auto it = p.find_by_order(mid);
            cout << it->first << " ";
            p.erase({v[l], l});
            l++;
        }
        r++;
    }
    cout << endl;

    return 0;
}