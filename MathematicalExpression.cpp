#include<bits/stdc++.h>
using namespace std;
/**
 * This function takes three integers and a character as input and performs a mathematical expression based on the character.
 * The function checks if the result of the expression matches the third integer.
 * If the result matches, it prints "Yes", otherwise it prints the result.
 *
 * @param None
 * @return None
 */
void solution(){
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >>c;
    int ans;
    if(s=='+'){
        ans=a+b;
    }else if(s=='-'){
        ans = a-b;
    }else if(s=='*'){
        ans =a*b;
    }else{
        ans=a/b;
    }
    if(ans==c){
        cout<< "Yes" << endl;
    }else{
        cout << ans << endl;
    }
}

/**
 * @brief Main function that calls the solution function.
 * 
 * @return 0 indicating successful execution of the program.
 */
int main(){
    solution();
    return 0;
}