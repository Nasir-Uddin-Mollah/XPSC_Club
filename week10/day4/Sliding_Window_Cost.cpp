#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    pbds<ll> p;
    for (int i = 0; i < k; i++)
    {
        p.insert(v[i]);
    }
    ll d = 0, old_mid = *p.find_by_order(((k + 1) / 2) - 1);
    for (int i = 0; i < k; i++)
    {
        d += abs(old_mid - v[i]);
    }
    cout << d << " ";
    for (int i = 0; i < n - k; i++)
    {
        p.erase(p.find_by_order(p.order_of_key(v[i])));
        p.insert(v[i + k]);
        ll mid = *p.find_by_order(((k + 1) / 2) - 1);
        d += abs(mid - v[i + k]) - abs(old_mid - v[i]);
        if (k % 2 == 0)
            d -= mid - old_mid;
        old_mid = mid;
        cout << d << " ";
    }
    cout << endl;

    return 0;
}