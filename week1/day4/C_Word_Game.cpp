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
        string s[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
        int points1 = 0, points2 = 0, points3 = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = mp[s[0][i]];
            if (cnt == 1)
                points1 += 3;
            else if (cnt == 2)
                points1++;
        }
        for (int i = 0; i < n; i++)
        {
            int cnt = mp[s[1][i]];
            if (cnt == 1)
                points2 += 3;
            else if (cnt == 2)
                points2++;
        }
        for (int i = 0; i < n; i++)
        {
            int cnt = mp[s[2][i]];
            if (cnt == 1)
                points3 += 3;
            else if (cnt == 2)
                points3++;
        }
        cout << points1 << " " << points2 << " " << points3 << endl;
    }

    return 0;
}