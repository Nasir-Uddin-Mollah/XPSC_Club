#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin >> n >> s;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sum = 0;
    int l = 0, r = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += a[r];
        if (sum >= s)
            ans = min(ans, r - l + 1);
        while (sum - a[l] >= s)
        {
            sum -= a[l];
            l++;
        }
        if (sum >= s)
            ans = min(ans, r - l + 1);
        r++;
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}