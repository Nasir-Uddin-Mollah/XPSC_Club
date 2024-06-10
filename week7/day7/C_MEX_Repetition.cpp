#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, mex, last;
        cin >> n >> k;

        vector<ll> v, t;
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            v.push_back(b);
        }
        t = v;
        sort(t.begin(), t.end());
        mex = n;
        for (int i = 0; i < n; i++)
        {
            if (t[i] != i)
            {
                mex = i;
                break;
            }
        }
        ll bkp;
        for (int i = 0; i < n; i++)
        {
            bkp = v[i];
            v[i] = mex;
            mex = bkp;
        }
        v.push_back(mex);

        last = (k - 1) % (n + 1);
        for (int i = (n + 1 - last); i < (n + 1); i++)
        {
            cout << v[i] << " ";
        }
        for (int i = 0; i < (n - last); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}