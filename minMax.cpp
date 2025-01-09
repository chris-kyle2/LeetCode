#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[] = {10, 4, 5, 2, 14, 3, 13, 4, 133};

   int n = sizeof(arr) / sizeof(int);

   int maximum = INT_MIN;
   int minimum = INT_MAX;
   cout << maximum << '\n';
   cout << minimum << '\n';

   for (int i = 0; i < n; i++)
   {
      int current_ele = arr[i];
      if (current_ele > maximum)
      {
         maximum = current_ele;
      }
      if (current_ele < minimum)
      {
         minimum = current_ele;
      }
   }
   cout << "Maximum: " << maximum << '\n';
   cout << "Minimum: " << minimum << '\n';

   return 0;
}