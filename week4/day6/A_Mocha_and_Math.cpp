#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans &= a[i];
        }
        cout << ans << endl;
    }
    return 0;
}