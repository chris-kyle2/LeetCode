#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt =0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(i>1){
                break;
            }
        }
        cnt++;
    }
    cout << cnt << endl;
}