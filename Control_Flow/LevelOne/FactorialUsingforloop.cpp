#include <bits/stdc++.h>
using namespace std;

int factorialloop(int num){
    int fact=1;
    if(num<=0){
        cout<<"Not a natural number.\n";
    }
    else{
        for(int i=1;i<=num;i++){
            fact*=i;
        }
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter a number: \n";
    cin>>num;
    cout<<"The factorial of given number is: \n"<<factorialloop(num);
}