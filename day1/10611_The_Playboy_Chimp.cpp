#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;
        auto it = lower_bound(v.begin(), v.end(), key);
        if (it != v.begin())
        {
            it--;
            cout << *it << " ";
        }
        else
            cout << "X ";

        auto it2 = upper_bound(v.begin(), v.end(), key);
        if (it2 != v.end())
        {
            cout << *it2 << "\n";
        }
        else
            cout << "X\n";
    }

    return 0;
}