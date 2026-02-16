#include<bits/stdc++.h>
using namespace std;

int simpleInterest(int principal,int rate,int time){
    int simpleinterest=(principal*rate*time)/100;
    return simpleinterest;
}

int main(){
    int principal;
    double rate;
    double time;
    cout<<"Enter the the value of Principal: ";
    cin>>principal;
    cout<<"Enter the Rate of Interest: ";
    cin>>rate;
    cout<<"Enter the period of time in months: ";
    cin>>time;
cout<<"The Simple Interest is "<<simpleInterest(principal,rate,time)<<" for principal "<<principal<<", rate of interest is "<<rate<<",and Time is"<<time<<endl;
}