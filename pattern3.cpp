//    *
//   ***
//  *****
// *******
//Print Such Pattern of pyramid of stars

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows in the pattern:"<<'\n';
    cin >>n;
    int jump=n-1;
    int times=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<jump;j++){
            cout<<" ";
        }
        for(int j=0;j<times;j++){
            cout << "*";
        }
        cout << '\n';
        jump--;
        times+=2;
    }
    return 0;
}