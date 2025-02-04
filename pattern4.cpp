// Printing Diamond Pattern

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *


#include<bits/stdc++.h>
using namespace std;
void printUpperHalf(int n){
    int jump =n-1;
    int times=1;
    for(int i=0;i<n;i++){
        for(int i=0;i<jump;i++){
            cout << " ";
        }
        for(int i=0;i<times;i++){
            cout << "*";
        }
        cout << '\n';
        jump--;
        times+=2;
    }
}
void printLowerHalf(int n){
    int jump=1;
    int times=2*n-1;
    for(int i=0;i<n;i++){
        for(int i=1;i<jump;i++){
            cout << " ";
        }
        for(int i=0;i<times;i++){
            cout << "*";
        }
        cout << '\n';
        jump++;
        times-=2;
    }

}

int main(){
    int n;
    cout << "Enter the number of rows in the pattern:"<<'\n';
    cin >>n;
    printUpperHalf(n);
    printLowerHalf(n);
    
    return 0;
}