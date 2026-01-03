#include<bits/stdc++.h>
using namespace std;

int greatestFactor(int num){
    int GreatestFactor=1;
    for(int i=num-1; i>=1; i--){
        if(num%i==0){
            GreatestFactor=i;
            break;
        }
    }
    return GreatestFactor;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int resultgreatestfactor=greatestFactor(num);
    if(num<0){
        cout<<"Please enter positive Integer!";
    }
    else{
        cout<<"The greatest factor of "<<num<<" is :"<<resultgreatestfactor<<endl;
    }
    return 0;

}