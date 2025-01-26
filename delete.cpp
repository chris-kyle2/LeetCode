#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,13,14,15,16};
    int n = sizeof(arr)/sizeof(int);
    cout << n << endl;
    cout << "Enter the index to delete: "<<endl;
    int index;
    cin>>index;
    if(index>=0 && index<=n-1){
        for(int i= index;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n=n-1;
    }
    cout << "After deleting element at index "<<index<<" the array is: ";
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    cout << endl;
    return 0;
    
}