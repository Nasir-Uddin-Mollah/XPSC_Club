#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == key)
            {
                flag = true;
                break;
            }
            if (key > v[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}