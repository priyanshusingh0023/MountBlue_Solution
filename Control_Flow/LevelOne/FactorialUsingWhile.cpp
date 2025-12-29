#include<bits/stdc++.h>
using namespace std;

int factorialWhile(int num){
    int fact=1;
    int i=1;
    if(num<=0){
        cout<<"Entered number is not a number.";
    }
    else{
    while(i<=num){
        fact*=i;
        i++;
    }
}
    return fact;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"the factorial of the given number is: "<<factorialWhile(num);
}