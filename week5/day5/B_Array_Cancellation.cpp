#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll possum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
                possum += v[i];
            else
            {
                ll mn = min(possum, abs(v[i]));
                v[i] += mn;
                possum -= mn;
            }
        }
        cout << possum << endl;
    }

    return 0;
}
