#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    a.push_back(INT_MAX);
    b.push_back(INT_MAX);
    int i = 0, j = 0;
    vector<long long> v;
    while (i < n || j < m)
    {
        if (a[i] < b[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(b[j]);
            j++;
        }
    }
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}