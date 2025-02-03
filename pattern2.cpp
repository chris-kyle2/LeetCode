#include<bits/stdc++.h>
using namespace std;

void pattern2(){
    int n;
    cout << "Enter the number of rows in the pattern:"<< '\n';
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << '\n';
    }
}
int main(){
    pattern2();
    return 0;
}