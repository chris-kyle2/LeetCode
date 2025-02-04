#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cout << "Enter the number of test cases: "<< '\n';
    cin >>t;
    while(t--){
        int n;
        cout<< "Enter the number to be converted to binary: "<< '\n';
        cin >> n;
        int cnt =0;
        for(int i=0;i<31;i++){
            if((n>>i)&1){
                cnt ++;
            }
        }
        cout<<(1<<cnt)-1<<'\n';
    }
    return 0;
}