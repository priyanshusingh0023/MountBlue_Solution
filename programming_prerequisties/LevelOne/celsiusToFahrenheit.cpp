#include <bits/stdc++.h>
using namespace std;
double celciusTofahrenheit(double celsius){
    double fahrenheit= (celsius* 9/2) + 32;
    return fahrenheit;

}
int main(){
    double celsius;
    cout<<"Enter the valie of Celsius: ";
    cin>>celsius;
    cout<< celciusTofahrenheit(celsius);
    return 0;
}
