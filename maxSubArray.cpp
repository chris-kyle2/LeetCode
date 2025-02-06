//Max SubArray Problem
//Given an array of integers, find the contiguous subarray with the largest sum.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout << "Enter the number of test cases: " << '\n';
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the size of the array: "<<'\n';
        cin >>n;
        int A[n];
        vector<int> a;
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        for(int s=1;s<=n;s++){
            for(int i=0;i<n-s+1;i++){
                int m= A[i];
                for(int j=i;j<i+s;j++){
                    m= max(m,A[j]);
                }
                a.push_back(m);
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            cout << a[i] << " ";
        }

    }
    return 0;
}