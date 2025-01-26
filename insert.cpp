#include<bits/stdc++.h>
using namespace std;

//inserting an element in an array at a index.

int main(){
    vector<int> arr = {12,13,14,15,16};
    int n = sizeof(arr)/sizeof(int);
    int index,element;
    cout << "Enter the index and element to insert: "<<endl;
    cin>>index>>element;
    if(index>=0 && index<=n-1){
        arr[index] = element;
        cout << "After inserting element at index "<<index<<" the array is: ";
        for(int &x:arr){
            cout <<x<<" ";
        }
    }else{
        cout<< "index out of range"<<endl;
    }
    return 0;
}