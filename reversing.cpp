#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int A[s];
        for(int i=0;i<s;i++){
            cin >> A[i];
        }
        for(int i=0;i<s/2;i++){
            swap(A[i],A[s-i-1]);
        }
        for(int i=0;i<s;i++){
            cout << A[i] << " ";
        }
    }
    return 0;
}