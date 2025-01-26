//Modify each element of a container in For each loop.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,13,14,15,16};
    for(int &x:arr){
        x=2*x;
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
