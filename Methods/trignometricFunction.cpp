#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<double> calculateTrigonometricFunctions(double angle) {

    double radians = angle * M_PI / 180.0;

    return {sin(radians), cos(radians), tan(radians)};
}

int main() {

    double angle;
    cout << "Enter angle in degrees: ";
    cin >> angle;

    vector<double> values = calculateTrigonometricFunctions(angle);

    cout << "Sine = " << values[0] << endl;
    cout << "Cosine = " << values[1] << endl;
    cout << "Tangent = " << values[2] << endl;
}
