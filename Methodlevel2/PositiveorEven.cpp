#include <iostream>
using namespace std;

// a. Method to check positive or negative
bool isPositive(int num) {
    if (num >= 0)
        return true;
    else
        return false;
}

// b. Method to check even or odd
bool isEven(int num) {
    return num % 2 == 0;
}

// c. Method to compare two numbers
int compare(int number1, int number2) {
    if (number1 > number2)
        return 1;
    else if (number1 == number2)
        return 0;
    else
        return -1;
}

int main() {
    int arr[5];

    // Take input
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "\nResults:\n";

    // d & e. Loop through array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " -> ";

        if (isPositive(arr[i])) {
            cout << "Positive";

            if (isEven(arr[i]))
                cout << " and Even";
            else
                cout << " and Odd";
        }
        else {
            cout << "Negative";
        }

        cout << endl;
    }

    // f. Compare first and last element
    int result = compare(arr[0], arr[4]);

    cout << "\nComparison of first and last element:\n";

    if (result == 1)
        cout << "First element is Greater than last element";
    else if (result == 0)
        cout << "Both elements are Equal";
    else
        cout << "First element is Less than last element";

    return 0;
}
