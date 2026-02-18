#include<bits/stdc++.h>
using namespace std;
pair<int,int> findRemainderAndQuotient(int dividend,int divisor){
    int Remainder=dividend%divisor;
    int quotient=dividend/divisor;
    return {Remainder,quotient};
}
int main(){
    int dividend,divisor;
    cout<<"Enter the Value of Dividend";
    cin>>dividend;
    cout<<"Enter the Value of Divisor";
    cin>>divisor;

    pair<int,int> result=findRemainderAndQuotient(dividend,divisor);
    cout<<"The Remainder is: "<<result.first<<endl;
    cout<<"The quotient is: "<<result.second<<endl;

    return 0;
}