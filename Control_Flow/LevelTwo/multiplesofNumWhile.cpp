#include <bits/stdc++.h>
using namespace std;

void printMultiples(int num){
    int i=100;
    while(i>=1){
        if(i%num==0){
            cout<<i<<endl;
        }
        i--;
    }
}
int main(){
    int num;
    cout<<"Enter Positive Number: ";
    cin>>num;

    if(num<=0 || num>=100){
        cout<<"Please enter positive number!";
    }
    else{
        printMultiples(num);
    }
    return 0;
}