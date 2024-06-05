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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    cnt += mp[j];
                    if (j * j != i)
                        cnt += mp[i / j];
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}