#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }

    ll mx = *max_element(v.begin(), v.end());

    vector<ll> p;
    for (auto &&i : v)
    {
        p.push_back(mx - i);
    }

    ll swords = p[0], sum = p[0];
    for (int i = 1; i < n; i++)
    {
        swords = gcd(swords, p[i]);
        sum += p[i];
    }
    ll m = sum / swords;
    
    cout << m << " " << swords << endl;
    return 0;
}