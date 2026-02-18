#include<bits/stdc++.h>
using namespace std;
int posNegZero(int number){
    if(number>0){
        return 1;
    }
    else if(number<0){
        return 0;
    }
    else{
        return -1;
    }
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int check=posNegZero(number);
    cout<<"The "<<number<<" is "<<check;
    return 0;
}