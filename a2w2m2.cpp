#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8};
    int i = arr[0]++;
    int j = ++arr[1];
    int k = (arr[0] + arr[1]);
    cout << i << " " << j << " " << k<<'\n';
    return 0;
}
