#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if ((1 << j) & i)
                ans += v[j];
            else
                ans -= v[j];
        }
        if (ans % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}