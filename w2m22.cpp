#include <bits/stdc++.h>
using namespace std;
#define size 10

int main()
{
    int arr[] = {2, 4, 7, 9, 11, 15, 16, 17};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
        
        arr[i] = arr[arr[i / 3] / 2];

     for (int i = 0; i < n; i++)
         cout << arr[i] << " ";

    return 0;
}
