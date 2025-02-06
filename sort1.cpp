// To sort an array using bubble sort

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cout << "Enter the number of test cases: " << '\n';
    cin >> k;
    while(k--){
        int n;
        cout << "Enter the size of array:" << '\n';
        cin >> n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(A[j]> A[j+1]){
                    int temp  = A[j+1];
                    A[j+1] =A[j];
                    A[j] =temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << A[i] << " ";
        }

        cout << '\n';
    }
    return 0;

}