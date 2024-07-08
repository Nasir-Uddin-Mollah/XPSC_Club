#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    map<ll, ll> mp;
    ll sum = 0, cnt = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        cnt += mp[sum - x];
        mp[sum]++;
    }
    cout << cnt << endl;

    return 0;
}