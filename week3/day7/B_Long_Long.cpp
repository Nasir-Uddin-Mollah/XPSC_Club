#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0, op = 0;
        bool negsegment = false;
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(a[i]);

            if (negsegment)
            {
                if (i == n or a[i] > 0)
                {
                    op++;
                    negsegment = false;
                }
            }
            else if (a[i] < 0)
                negsegment = true;
        }
        
        cout << sum << " " << op << endl;
    }
    return 0;
}