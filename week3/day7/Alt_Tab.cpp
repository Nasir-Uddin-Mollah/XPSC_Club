#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(v[i]) == s.end())
        {
            s.insert(v[i]);
            // cout << v[i][v[i].size() - 2] << v[i][v[i].size() - 1];
            cout << v[i].substr(v[i].size() - 2);
        }
    }
    cout << endl;

    return 0;
}