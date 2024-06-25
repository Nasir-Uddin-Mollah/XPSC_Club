#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &&i : v)
        {
            cin >> i;
        }

        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                if (v[i] % j == 0)
                {
                    while (v[i] % j == 0)
                    {
                        cnt[j]++;
                        v[i] /= j;
                    }
                }
            }
            if (v[i] > 1)
                cnt[v[i]]++;
        }
        bool ok = true;
        for (auto &&[x, y] : cnt)
        {
            if (y % n != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}