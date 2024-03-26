#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll mx = INT_MIN;
        for (auto &&i : mp)
        {
            if (i.second >= mx)
                mx = i.second;
        }
        ll cnt=0;
        while (mx < n)
        {
            ll rem_val = n - mx;
            ll can_add = mx;
            cnt++;
            cnt += min(can_add, rem_val);
            mx += min(can_add, rem_val);
        }

        cout << cnt << endl;
    }

    return 0;
}