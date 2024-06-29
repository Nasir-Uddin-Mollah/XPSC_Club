#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ll x;
    cin >> x;
    ll a = 1, b = x;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0 && __gcd(i, x / i) == 1)
        {
            if (max(i, x / i) <= max(a, b))
            {
                a = i;
                b = x / i;
            }
        }
    }
    cout << a << " " << b << endl;

    return 0;
}