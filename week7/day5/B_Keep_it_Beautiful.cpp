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
        vector<int> v(n), a;
        for (auto &&i : v)
        {
            cin >> i;
        }
        string s;
        bool sorted = true;
        for (int i = 0; i < n; i++)
        {
            if (a.empty())
            {
                a.push_back(v[i]);
                s += '1';
            }
            else
            {
                if (sorted)
                {
                    if (v[i] >= a.back())
                    {
                        a.push_back(v[i]);
                        s += '1';
                    }

                    else if (v[i] > a.front())
                    {
                        s += '0';
                    }
                    else
                    {
                        sorted = false;
                        a.push_back(v[i]);
                        s += '1';
                    }
                }
                else
                {
                    if (v[i] < a.back() || v[i] > a.front())
                    {
                        s += '0';
                    }
                    else
                    {
                        a.push_back(v[i]);
                        s += '1';
                    }
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}