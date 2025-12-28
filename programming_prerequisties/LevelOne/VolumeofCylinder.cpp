#include <bits/stdc++.h>
using namespace std;
double volumeofcylinder(double radius, double height){
    double pi=cos(-1);
    double volume =  pi*radius*radius*height;
    return volume;
}
int main(){
    double radius,height;
    cout<<"Enter the Value of Radius and Height of Cylinder: ";
    cin>>radius>>height;
    cout<<volumeofcylinder(radius,height);
    return 0;
}