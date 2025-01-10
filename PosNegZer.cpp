//This C++ code is designed to determine whether an integer n is positive, negative, or zero.

#include<bits/stdc++.h>
using namespace std;

int main(){
  int k;
  cout << "ENTER THE NUMBER OF TEST CASES" << '\n';
  cin >> k;
  while(k>0){
  int n;
  cout << "ENTER THE NUMBER" << '\n';
  cin >> n;
  (n>=0 ?(n==0? cout<<"ZERO" << '\n': cout<< "POSITIVE" << '\n'): cout << "NEGATIVE" << '\n');
  k-- ;
  }
}