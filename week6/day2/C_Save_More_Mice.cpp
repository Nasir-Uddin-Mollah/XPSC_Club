#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int ans = 0, cat = 0;
        for (int i = 0; i < m; i++)
        {
            if (v[i] > cat)
            {
                cat += n - v[i];
                ans++;
            }
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}