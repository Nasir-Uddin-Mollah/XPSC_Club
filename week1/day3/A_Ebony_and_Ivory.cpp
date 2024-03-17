#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 0; i <= c; ++i)
    {
        for (int j = 0; j <= c; j++)
        {
            if ((a*i)+(b*j)==c)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
