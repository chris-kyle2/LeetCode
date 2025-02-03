//Numbers Histogram using a symbol of your choice in C++
#include<bits/stdc++.h>
using namespace std;


int histogram(){
    char symbol;
    cout << "Enter the symbol you want to use: "<<endl;
    cin >> symbol;
    int n;
    cout << "Enter the number of elements in array: "<< endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            cout << symbol;
        }
        cout << '\n';
    }
    return 0;
}

int main(){
    histogram();
    return 0;
}