#include<bits/stdc++.h>
using namespace std;


void solution(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    solution();
    return 0;
}