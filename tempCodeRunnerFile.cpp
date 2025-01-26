#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            continue;
        {
            if (i == 6)
                break;
        }
        cout << i << ' ';
    }
    return 0;
}
