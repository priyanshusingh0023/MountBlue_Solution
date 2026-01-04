#include <bits/stdc++.h>
using namespace std;

void powerCal(int num, int power){
    int result=1;
    for(int i=1;i<=power;i++){
        result*=num;
    }
    cout<<result;
}

int main(){
    int num,power;
    cout<<"Enter number and power: ";
    cin>>num>>power;

    if(num<=0 || power<=0){
        cout<<"please enter positive integer!";
    }
    else{
        powerCal(num,power);
    }
    return 0;
}