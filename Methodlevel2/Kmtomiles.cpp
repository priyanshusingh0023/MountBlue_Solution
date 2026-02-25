#include <iostream>
using namespace std;

class UnitConvertor {
public:

    // a. Kilometers → Miles
    static double convertKmToMiles(double km) {
        double km2miles = 0.621371;
        return km * km2miles;
    }

    // b. Miles → Kilometers
    static double convertMilesToKm(double miles) {
        double miles2km = 1.60934;
        return miles * miles2km;
    }

    // c. Meters → Feet
    static double convertMetersToFeet(double meters) {
        double meters2feet = 3.28084;
        return meters * meters2feet;
    }

    // d. Feet → Meters
    static double convertFeetToMeters(double feet) {
        double feet2meters = 0.3048;
        return feet * feet2meters;
    }
};

int main() {

    cout << "10 km to miles = "
         << UnitConvertor::convertKmToMiles(10) << endl;

    cout << "5 miles to km = "
         << UnitConvertor::convertMilesToKm(5) << endl;

    cout << "3 meters to feet = "
         << UnitConvertor::convertMetersToFeet(3) << endl;

    cout << "10 feet to meters = "
         << UnitConvertor::convertFeetToMeters(10) << endl;

    return 0;
}
