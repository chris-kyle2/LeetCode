#include<bits/stdc++.h>
using namespace std;

void printPattern1(){
  int n;
  cout << "Enter the number of rows in the pattern:"<< '\n';
  cin >> n;
   for(int i =n;i>0;i--){
     for(int j=0;j<i;j++){
        cout << "*";
     }
     cout <<'\n';
   
   }
}
int main(){
    printPattern1();
    return 0;
}