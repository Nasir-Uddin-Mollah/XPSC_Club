#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](int mid)
    {
        if (mid < min(x, y))
            return false;
        mid -= min(x, y);
        return (mid / x + mid / y) + 1 >= n;
    };

    int l = 1, r = max(x, y) * n, ans, mid;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;

    return 0;
}