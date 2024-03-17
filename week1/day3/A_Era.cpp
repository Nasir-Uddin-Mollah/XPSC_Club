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
        long long a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > i)
            {
                ans = max(ans, abs(a[i] - i));
            }
        }
        cout << ans << endl;
    }

    return 0;
}