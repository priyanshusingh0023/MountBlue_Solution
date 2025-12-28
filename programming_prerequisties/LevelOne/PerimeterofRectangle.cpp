#include <bits/stdc++.h>
using namespace std;
double perimeterofrectangle(double l, double w){
    double perimeter=2*(l+w);
    return perimeter;
}
int main(){
    double l,w;
    cout<<"Enter the value of Length and width of Rectangle :";
    cin>>l>>w;
    cout<<perimeterofrectangle(l,w);
    return 0;
    
}