#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ascen(pair<char, ll> a, pair<char, ll> b)
{
    return a.first < b.first;
}
bool descen(pair<char, ll> a, pair<char, ll> b)
{
    return a.first > b.first;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        vector<pair<char, ll>> v;

        char mn = min(s[0], s[n - 1]);
        char mx = max(s[0], s[n - 1]);
        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= mn and s[i] <= mx))
            {
                v.push_back({s[i], i});
            }
        }
        if (v.size() > 2)
        {
            if (s[0] > s[(s.size()) - 1])
                sort(v.begin() + 1, v.end() - 1, descen);
            else
                sort(v.begin() + 1, v.end() - 1, ascen);
        }
        vector<ll> path;
        ll dis = 0;
        path.push_back(1);

        for (int i = 1; i < v.size(); i++)
        {
            dis += abs(v[i - 1].first - v[i].first);
            path.push_back(v[i].second + 1);
        }

        cout << dis << " " << path.size() << endl;
        for (auto &&i : path)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}