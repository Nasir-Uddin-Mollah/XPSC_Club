#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(200005);
    for (int i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }
    ll cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cnt += v[i];
        if (cnt >= k)
            v[i] = 1;
        else
            v[i] = 0;
    }
    
    vector<ll> p(200005);
    for (int i = 1; i < p.size(); i++)
    {
        p[i] = v[i - 1] + p[i - 1];
    }
    
    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        cout << p[r + 1] - p[l] << endl;
    }

    return 0;
}