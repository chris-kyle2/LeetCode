#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cout << "Enter the number of test cases" << '\n';
    cin >>k;
    while(k>0){
        int n;
        cout << "Enter the number of days" << '\n';
        cin >>n;
        int y = n/365;
        int m= (n%365)/30 ;
        int d = n - 365*y - m*30 ;
        cout << y << " years" <<'\n';
        cout << m << " months" << '\n';
        cout << d << " days" << '\n';
        k--;
    }
}