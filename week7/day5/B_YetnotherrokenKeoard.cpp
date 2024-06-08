#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<bool> ok(n, true);
        vector<int> capital, small;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                if (!small.empty())
                {
                    ok[small.back()] = false;
                    small.pop_back();
                }
                ok[i] = false;
            }
            else if (s[i] == 'B')
            {
                if (!capital.empty())
                {
                    ok[capital.back()] = false;
                    capital.pop_back();
                }
                ok[i] = false;
            }
            else if (s[i] >= 'a' and s[i] <= 'z')
                small.push_back(i);
            else
                capital.push_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (ok[i])
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}