#include <iostream>
using namespace std;

// User-defined function to print multiples of a number below 100
void printMultiples(int number) {
    for (int i = 100; i >= 1; i--) {   // loop backward
        if (i % number == 0) {         // check divisibility
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Validate input
    if (number <= 0 || number >= 100) {
        cout << "Please enter a positive integer less than 100." << endl;
    } else {
        cout << "Multiples of " << number << " below 100 are:" << endl;
        // Call the user-defined function
        printMultiples(number);
    }

    return 0;
}
