#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < v.size(); i++)
    {
        if (!v.empty() && v[i] == x)
        {
            v.erase(v.begin() + i);
            i--;
        }
    }

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}
