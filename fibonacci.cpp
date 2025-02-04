// Print the first 
// N
// N numbers from the Fibonacci Sequence.
// This solution is using recurs
#include<bits/stdc++.h>
using namespace std;
int fibbonaci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
        }else{
        return fibbonaci(n-1)+fibbonaci(n-2);
    }
}

int main(){
    
    int n;
    cout << "Enter the number of elements in the fibonacci sequence: "<< '\n';
    cin >> n;
    for(int i=0;i<n;i++){
        
        cout << fibbonaci(i) << " ";
    }
    cout << '\n';
    return 0;

}