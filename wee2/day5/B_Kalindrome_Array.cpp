#include <bits/stdc++.h>
using namespace std;
bool kalindromeornot(vector<int> v)
{
    int l = 0, r = v.size() - 1;
    bool kalindrome = true;
    while (l < r)
    {
        if (v[l] != v[r])
        {
            kalindrome = false;
            break;
        }
        l++;
        r--;
    }
    return kalindrome;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int l = 0, r = n - 1, ai, aj;
        bool flag = true;
        while (l < r)
        {
            if (v[l] != v[r])
            {
                flag = false;
                ai = v[l];
                aj = v[r];
                break;
            }
            l++;
            r--;
        }
        if (flag)
            cout << "YES\n";
        else
        {
            vector<int> v2, v3;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == ai)
                    continue;
                v2.push_back(v[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (v[i] == aj)
                    continue;
                v3.push_back(v[i]);
            }
            bool ans1 = kalindromeornot(v2);
            bool ans2 = kalindromeornot(v3);
            if (ans1 || ans2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}