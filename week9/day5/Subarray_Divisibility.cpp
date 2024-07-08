#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    map<ll, ll> rem;
    ll mod = 0, cnt = 0;
    rem[0] = 1;
    for (int i = 0; i < n; i++)
    {
        mod = ((mod + v[i]) % n + n) % n;
        cnt += rem[mod];
        rem[mod]++;
    }
    cout << cnt << endl;

    return 0;
}