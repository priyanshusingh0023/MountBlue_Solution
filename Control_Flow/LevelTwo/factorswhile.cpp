#include <bits/stdc++.h>
using namespace std;

void printfactors(int num){
    cout<<"factors of "<<num<<" are: ";
    int i=1;
    while(i<num){
        if(num%i==0){
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
}
int main(){
    int num;
    cout<<"Enter a positive num: ";
    cin>>num;
    if(num<=0){
        cout<<"Please Enter a positive number:";
    }
    else{
        printfactors(num);
    }
    return 0;
}