// Problem: Sum of odd numbers between two numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout << "Enter the number of test cases: "<< '\n';
    cin>>t;
    while(t--){
        int a,b;
        cout << "Enter the value of a and b: "<< '\n';
        cin >> a >> b;
        if(a>b){
            swap(a,b);
        }
        cout <<"The value of b is :"<< b <<'\n';
        cout <<"The value of a is :" << a << '\n';
        if(b==a+1){
            cout << "0"<< '\n';
        }else{
            int sum =0;
            for(int i=a+1;i<b;i++){
                if(i%2!=0){
                    sum+=i;
                }
            }
            cout << sum << '\n';
        }
    }
    return 0;
}