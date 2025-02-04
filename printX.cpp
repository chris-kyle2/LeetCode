//Print the pattern X
//          \***/
//          *\*/*
//          **X**
//          */*\*
//          /***\

#include <bits/stdc++.h>
using namespace std;
// O(N^2) time complexity
// O(1) space complexity

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == n / 2) // special case to print X
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n/2)
                {
                    cout<<"X";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else // print \ and /
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                {
                    cout << '\\';
                }
                else if (j == n - 1 - i)
                {
                    cout << "/";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
