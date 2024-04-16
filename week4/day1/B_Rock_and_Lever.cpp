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
            int x;
            cin >> x;
            mp[__lg(x)]++;
        }
        long long int ans = 0;
        for (auto [x, y] : mp)
        {
            ans += (1LL * y * (y - 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}