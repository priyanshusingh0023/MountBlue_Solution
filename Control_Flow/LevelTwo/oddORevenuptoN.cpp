#include<bits/stdc++.h>
using namespace std;

void oddeven(int num){
    if(num<=0){
        cout<<"The entered number is not a natural number.\n";
    }
    else{
        for(int i=1;i<=num;i++){
            if(i%2==0){
                cout<<i<<" Even Number\n";
            }
            else{
                cout<<i<<" Odd Number\n";
            }
        }
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    oddeven(num);
    return 0;
}