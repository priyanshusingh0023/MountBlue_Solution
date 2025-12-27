#include<bits/stdc++.h>
#include<cmath>
using namespace std;
double Areaofcircle(double radius){
    double pi=acos(-1);
    double area = pi*radius*radius;
    return area;
}
int main(){
    double radius;
    cout<<"Enter the value of Radius: ";
    cin>>radius;
    cout<<Areaofcircle(radius);
    return 0;

    
}