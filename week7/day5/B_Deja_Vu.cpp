#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), x;
        for (auto &&i : a)
        {
            cin >> i;
        }
        for (int i = 0; i < q; i++)
        {
            int val;
            cin >> val;
            if (x.empty() || x.back() > val)
                x.push_back(val);
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < x.size(); j++)
            {
                int d = pow(2, x[j]);
                if (a[i] % d == 0)
                {
                    a[i] += pow(2, x[j] - 1);
                }
            }
        }
        for (auto &&i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}