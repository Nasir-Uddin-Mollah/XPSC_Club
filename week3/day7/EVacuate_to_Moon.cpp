#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, o, h;
        cin >> c >> o >> h;
        vector<int> vc(c), vo(o);
        for (int i = 0; i < c; i++)
        {
            cin >> vc[i];
        }
        for (int i = 0; i < o; i++)
        {
            cin >> vo[i];
        }
        sort(vc.rbegin(), vc.rend());
        sort(vo.rbegin(), vo.rend());
        long long sum = 0;
        for (int i = 0; i < min(c, o); i++)
        {
            sum += min(1LL * vc[i], 1LL * vo[i] * h);
        }
        cout << sum << endl;
    }

    return 0;
}