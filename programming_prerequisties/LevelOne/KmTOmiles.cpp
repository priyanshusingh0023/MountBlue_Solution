#include<bits/stdc++.h>
using namespace std;
double KmtoMiles(double km){
    double Miles = km*0.621371;
    return Miles;
}
int main(){
    double km;
    cout<<"Enter the value of Kilometer: "; 
    cin>>km;
    cout<<KmtoMiles(km);
    return 0;
}