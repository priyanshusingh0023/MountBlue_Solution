#include <bits/stdc++.h>
using namespace std;

int powercal(int num,int power){
    int result=1;
    int counter=0;
    while(counter<power){
        result*=num;
        counter++;
    }
    return result;
}
int main(){
    int num,power;
    cout<<"Enter Number and Power: ";
    cin>>num>>power;
    if(num<=0 || power<=0){
        cout<<"Please enter positive integer!";
    }
    else{
         int powerResult=powercal(num,power);

        cout<<powerResult;
    }
}