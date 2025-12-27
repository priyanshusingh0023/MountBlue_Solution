#include<bits/stdc++.h>

using namespace std;
double power_calculation(double base, double exponential){
    double result= pow(base,exponential);
    return result;
}
int main(){
    double base,exponential;
    cout<<"Enter the value of Base and Exponenet: ";
    cin>>base>>exponential;
    cout<<power_calculation(base,exponential);
    return 0;
}