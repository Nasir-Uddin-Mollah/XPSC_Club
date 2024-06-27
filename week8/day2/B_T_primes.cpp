#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N = 1e6;
// bool isprime(int n)
// {
//     if (n == 1)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
bool isperfectprime(ll n)
{
    ll x = sqrtl(n);
    return x * x == n;
}
int main()
{
    int n;
    cin >> n;

    vector<bool> prime(N + 1, true);
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= N; j += i)
                prime[j] = false;
        }
    }
    
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            cout << "NO\n";
        else if (prime[sqrtl(v[i])] && isperfectprime(v[i]))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}