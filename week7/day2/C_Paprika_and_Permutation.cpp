#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mpp;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
            if (mpp[arr[i]] > 1 && arr[i] <= n)
            {
                a.push_back(arr[i]);
            }
            else if (arr[i] > n)
            {
                a.push_back(arr[i]);
            }
        }
        sort(a.rbegin(), a.rend());
        int aa = a.size();
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            if (mpp[i] == 0)
            {
                int z = a.back();
                a.pop_back();
                int y = i;
                if (z % (z - y) == y)
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << aa << "\n";
        else
            cout << -1 << endl;
    }

    return 0;
}