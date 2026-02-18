#include<bits/stdc++.h>
using namespace std;

double numberOfRounds(double side1,double side2, double side3){
    double perimeter=side1+side2+side3;
    double rounds=5000/perimeter;
    return rounds;
}
int main(){
    double side1,side2,side3;
    cout<<"Enter the three sides of Triangular Park (in meters) : ";
    cin>>side1>>side2>>side3;
    double Round=numberOfRounds(side1,side2,side3);

    cout<<"The Athlete wants to complete "<<Round<<" Round to complete 5 km Run.";
}