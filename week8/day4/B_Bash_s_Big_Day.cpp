#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> cnt;

    while (n--)
    {
        int x;
        cin >> x;
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                cnt[j]++;
                while (x % j == 0)
                {
                    x /= j;
                }
            }
        }
        if (x > 1)
            cnt[x]++;
    }

    int ans = 1;

    for (auto [x, y] : cnt)
    {
        ans = max(ans, y);
    }

    cout << ans << endl;

    return 0;
}