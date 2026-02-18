#include<bits/stdc++.h>
using namespace std;
int sumOfnatural(int number){
    int sum=0;
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    return sum;
}
 int main(){
    int number;
    cout<<"Enter a natural number: ";
    cin>>number;
    int result=sumOfnatural(number);
    cout<<"The Sum For Entered number is: "<<result;
    return 0;
 }