#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int odd = 0;
        for (auto &&c : mp)
        {
            if (c.second % 2 == 1)
                odd++;
        }
        if (k >= odd - 1)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
}