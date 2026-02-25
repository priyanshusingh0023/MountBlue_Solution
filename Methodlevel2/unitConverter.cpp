#include <iostream>
using namespace std;

class UnitConvertor {
public:

    // a. Yards → Feet
    static double convertYardsToFeet(double yards) {
        double yards2feet = 3;
        return yards * yards2feet;
    }

    // b. Feet → Yards
    static double convertFeetToYards(double feet) {
        double feet2yards = 0.333333;
        return feet * feet2yards;
    }

    // c. Meters → Inches
    static double convertMetersToInches(double meters) {
        double meters2inches = 39.3701;
        return meters * meters2inches;
    }

    // d. Inches → Meters
    static double convertInchesToMeters(double inches) {
        double inches2meters = 0.0254;
        return inches * inches2meters;
    }

    // e. Inches → Centimeters
    static double convertInchesToCm(double inches) {
        double inches2cm = 2.54;
        return inches * inches2cm;
    }

    // f. Fahrenheit → Celsius
    static double convertFahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5.0 / 9.0;
    }

    // g. Celsius → Fahrenheit
    static double convertCelsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32;
    }

    // h. Pounds → Kilograms
    static double convertPoundsToKilograms(double pounds) {
        double pounds2kg = 0.453592;
        return pounds * pounds2kg;
    }

    // i. Kilograms → Pounds
    static double convertKilogramsToPounds(double kg) {
        double kg2pounds = 2.20462;
        return kg * kg2pounds;
    }

    // j. Gallons → Liters
    static double convertGallonsToLiters(double gallons) {
        double gallons2liters = 3.78541;
        return gallons * gallons2liters;
    }

    // k. Liters → Gallons
    static double convertLitersToGallons(double liters) {
        double liters2gallons = 0.264172;
        return liters * liters2gallons;
    }
};

int main() {

    cout << "5 yards to feet = "
         << UnitConvertor::convertYardsToFeet(5) << endl;

    cout << "12 feet to yards = "
         << UnitConvertor::convertFeetToYards(12) << endl;

    cout << "2 meters to inches = "
         << UnitConvertor::convertMetersToInches(2) << endl;

    cout << "24 inches to meters = "
         << UnitConvertor::convertInchesToMeters(24) << endl;

    cout << "10 inches to cm = "
         << UnitConvertor::convertInchesToCm(10) << endl;

    cout << "98°F to Celsius = "
         << UnitConvertor::convertFahrenheitToCelsius(98) << endl;

    cout << "37°C to Fahrenheit = "
         << UnitConvertor::convertCelsiusToFahrenheit(37) << endl;

    cout << "150 pounds to kg = "
         << UnitConvertor::convertPoundsToKilograms(150) << endl;

    cout << "70 kg to pounds = "
         << UnitConvertor::convertKilogramsToPounds(70) << endl;

    cout << "3 gallons to liters = "
         << UnitConvertor::convertGallonsToLiters(3) << endl;

    cout << "10 liters to gallons = "
         << UnitConvertor::convertLitersToGallons(10) << endl;

    return 0;
}
