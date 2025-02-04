//Fibonacci without recursion
//Logic update a and b in the loop and print b
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    if(n==1){
        cout << a <<" ";
    }else if(n==2){
        cout << a << " " << b << " ";
    }
    else{
        cout<< a << " " << b << " ";
        for(int i=3;i<=n;i++){
            
            int temp =b;
            b=a+b;
            a=temp;
            cout << b << " ";

        }
    }
    return 0;

}
int main(){
    int n;
    cout << "Enter the number of elements in the fibonacci sequence: "<< '\n';
    cin >> n;
    fibonacci(n);
    return 0;
}