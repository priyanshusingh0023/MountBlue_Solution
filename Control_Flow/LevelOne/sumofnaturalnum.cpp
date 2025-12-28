#include <bits/stdc++.h>
using namespace std;

int sumofnatural(int n){
    int sum=0;
    if(n<0){
        return sum;
    }
    else{
        sum= n*(n+1)/2; 
    }
    return sum;

}
int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    cout<<sumofnatural(n);
    return 0;
}