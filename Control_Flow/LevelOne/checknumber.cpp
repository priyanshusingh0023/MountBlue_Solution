#include <bits/stdc++.h>
using namespace std;

void checknumber(int num){
    if(num==0){
        cout<<"Zero"<<endl;
    }
    else if(num>0){
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    checknumber(num);
    return 0;
}