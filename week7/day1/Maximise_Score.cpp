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
        vector<int> dif(n - 1);
        dif[0] = abs(v[0] - v[1]);
        dif[n - 2] = abs(v[n - 2] - v[n - 1]);
        for (int i = 1; i < n - 2; i++)
        {
            int d1 = abs(v[i] - v[i + 1]);
            int d2 = abs(v[i] - v[i - 1]);
            dif[i] = max(d1, d2);
        }
        int ans = *min_element(dif.begin(), dif.end());
        cout << ans << endl;
    }

    return 0;
}