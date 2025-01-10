//Finding Minimum and Maximum between two numbers
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cout<<"Enter the number of test cases"<<'\n';
    cin >> k;
    while(k>0){

    int a,b;
    cin >>a>>b;
    int max =(a>b)?a:b;
    cout<<"Maximum: "<<max<<'\n';
    k--;
    }
}