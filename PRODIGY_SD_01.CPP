#include <iostream>
using namespace std;

// Function prototypes
double CelsiusToFahrenheit(double celsius);
double CelsiusToKelvin(double celsius);
double FahrenheitToCelsius(double fahrenheit);
double FahrenheitToKelvin(double fahrenheit);
double KelvinToCelsius(double kelvin);
double KelvinToFahrenheit(double kelvin);
int main() {
    double temperature;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> temperature;
    cout << "Enter the unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    switch (unit) {
        case 'C':
        case 'c':
            cout << "Temperature in Fahrenheit: " << CelsiusToFahrenheit(temperature) << " F" << endl;
            cout << "Temperature in Kelvin: " << CelsiusToKelvin(temperature) << " K" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperature in Celsius: " << FahrenheitToCelsius(temperature) << " C" << endl;
            cout << "Temperature in Kelvin: " << FahrenheitToKelvin(temperature) << " K" << endl;
            break;
        case 'K':
        case 'k':
            cout << "Temperature in Celsius: " << KelvinToCelsius(temperature) << " C" << endl;
            cout << "Temperature in Fahrenheit: " << KelvinToFahrenheit(temperature) << " F" << endl;
            break;
        default:
            cout << "Invalid unit of measurement entered." << endl;
    }

    return 0;
}

// Function definitions
double CelsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double CelsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double FahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double FahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

double KelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double KelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}
