#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[v[i]] = 1;
        }
        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i + 1] && s[i] == t[j])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };
    int l = 0, r = n, mid, ans;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;

    return 0;
}