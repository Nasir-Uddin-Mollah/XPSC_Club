#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> ch(n);
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                ans = ans + i;
            else
                ans = ans + n - i - 1;

            if (s[i] == 'L')
            {
                ch[i] = n - i - 1 - (i);
            }
            else
            {
                ch[i] = i - (n - i - 1);
            }
        }
        sort(ch.begin(), ch.end(), greater<ll>());

        for (int i = 0; i < n; i++)
        {
            if (ch[i] > 0)
            {
                ans += ch[i];
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
}
