#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 8, 10, 15, 25};
    int i = 4;
    int res = 0;
    while (i)
    {
        res = arr[i] * i;
        i--;
    }

    cout << res << endl;
    return 0;
}
