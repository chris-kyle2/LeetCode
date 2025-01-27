#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout << "ENTER THE NUMBER OF TEST CASES" << '\n';
    cin >> t;
    while(t--){
        int s;
        cout << "ENTER THE SIZE OF THE ARRAY" << '\n';
        cin >> s;
        int A[s];
        for(int i = 0; i < s; i++){
            cin >> A[i];
        }
        int x;
        cout<< "ENTER THE ELEMENT TO BE SEARCHED" << '\n';
        cin >> x;
        bool found = false;
        for(int i=0;i<s;i++){
            if(A[i] == x){
                cout << "ELEMENT FOUND AT INDEX " << i << '\n';
                found = true;
                break;
            }
        }
        if(!found){
            cout << "ELEMENT NOT FOUND" << '\n';
        }
    }
    return 0;
}