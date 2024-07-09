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
        map<int, int> mp;
        for (auto &&i : v)
        {
            cin>>i;
            mp[i]++;
        }

        int x = 0;
        for (int i = 0; i <= n; ++i)
        {
            if (mp.find(i) == mp.end())
            {
                cout << i << endl;
                break;
            }
            if (mp[i] == 1)
                x++;
            if (x == 2)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}