#include<bits/stdc++.h>
using namespace std;
double Simple_interest(double p, double r, double t){
    double si= (p*r*t)/100;
    return si;
}
int main(){
    double p,r,t;
    cout<<"Enter the value of Principal, Rate of interest and time: ";
    cin>>p>>r>>t;
    cout<<Simple_interest(p,r,t);
}