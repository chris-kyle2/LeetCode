// Problem: Number Sepration
// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        if (n==0)
           cout<<0;
        while(n>0){
            cout << n%10 << " ";
            n=n/10;
        }
        cout << '\n';
        
    }
    return 0;
}