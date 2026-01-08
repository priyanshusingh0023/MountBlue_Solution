#include<bits/stdc++.h>
using namespace std;

void votingEligibility(int ages){
    if(ages<0){
        cout<<"The age is Invalid."<<endl;
    }
    else if(ages>=18){
        cout<<"The student age is "<<ages<<" can vote"<<endl;
    }
    else{
        cout<<"The student age is "<<ages<<" cannot vote"<<endl;
    }
}
int main(){
    int ages[10];
    cout<<"Enter the age of 10 Students:"<<endl;
    for(int i=0;i<10;i++){
        cin>>ages[i];
    }
    for(int i=0;i<10;i++){
        votingEligibility(ages[i]);
    }
    return 0;
}