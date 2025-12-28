#include <bits/stdc++.h>
using namespace std;
bool firstnumsmall(int num1, int num2, int num3){
    bool issmall=false;
    if(num1<num2 && num1<num3){
        issmall=true;
    }
    else{
        issmall=false;
    }
    return issmall;
}
int main(){
    int num1,num2,num3;
    cout<<"Enter Your Three Numbers: ";
    cin>>num1>>num2>>num3;
    cout<<boolalpha;
    cout<<"Is the first number is smallest ? "<<firstnumsmall(num1,num2,num3);
    return 0;
}