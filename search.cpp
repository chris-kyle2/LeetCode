#include<bits/stdc++.h>
using namespace std;

//Search for an element in an array.
void search(int arr[],int size,int element){
    cout << size<<endl;
    int i=0;
    for(i=0;i<size;i++){
        if(arr[i]== element){
            cout << "Element found at index "<< i << endl;
            return;
        }
         
    }
    if( i == size){
        cout << "Element not found"<<endl;
    }
}

int main(){
    
    int arr[5] = {12,13,14,15,16};
    int size = sizeof(arr)/sizeof(int);
    int element = 12;
    search(arr,size,element);
    return 0;
}