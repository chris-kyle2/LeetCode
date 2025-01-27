//Find the position of the elements of the array that are less than or equal to 10 and print them.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin>>n;
      int A[n];
      for(int i=0;i<n;i++){
        cin >> A[i];
      }
      for(int i=0;i<n;i++){
        if(A[i]<=10){
            cout << "A["<<i<<"]"<<" = "<<A[i]<<'\n';
        }
      }
    }
    return 0;
}