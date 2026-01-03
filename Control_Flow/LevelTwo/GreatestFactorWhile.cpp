#include <bits/stdc++.h>
using namespace std;

int greatestFactor(int num){
    int counter=num-1;
    int GreatestFactor=1;
    while(counter--){
        if(num%counter==0){
            GreatestFactor=counter;
            break;
        }
    }
    return GreatestFactor;
}

int main(){
    int num, resultgreatestfactor;
    cout<<"Enter a Positive number: ";
    cin>>num;
    resultgreatestfactor=greatestFactor(num);
    if(num<=0){
        cout<<"Please enter a positive number!";
    }
    else{
        cout<<"The greatest Factor "<<num<<" is: "<<resultgreatestfactor;
    }
    return 0;
}