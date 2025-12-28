#include <bits/stdc++.h>
using namespace std;
bool divisibleby5( int num){
    bool candivide=false;
    if(num % 5 == 0){
        candivide=true;
    }
    else{
        candivide=false;
    }
   return candivide;
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    bool result = divisibleby5(num);
    cout<<boolalpha;
    cout<<"Is The number "<<num<<" divisible by 5? "<<result;
}