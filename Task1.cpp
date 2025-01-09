
//How to read n elements into the array by taking input n and elements? And then print their index and value at each index.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
       cin >>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" "<< "at index" << " " << i << '\n';
    }
}

