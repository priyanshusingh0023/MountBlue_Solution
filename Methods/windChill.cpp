#include<bits/stdc++.h>
using namespace std;

double calculateWindChill(double temperature, double windSpeed){
    double windchill =
        35.74
        + (0.6215 * temperature)
        - (35.75 * pow(windSpeed, 0.16))
        + (0.4275 * temperature * pow(windSpeed, 0.16));

    return windchill;
}

int main(){
    double temperature;
    double windSpeed;

    cout<<"Enter the Temperature (in Fahrenheit): ";
    cin>>temperature;

    cout<<"Enter the Wind Speed (in mph): ";
    cin>>windSpeed;

    double result = calculateWindChill(temperature, windSpeed);

    cout<<"The wind chill is: "<<result;

    return 0;
}
