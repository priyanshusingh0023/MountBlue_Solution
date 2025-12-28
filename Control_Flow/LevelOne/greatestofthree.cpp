#include <bits/stdc++.h>
using namespace std;

// Function to check if first number is largest
bool isFirstLargest(int num1, int num2, int num3) {
    return (num1 >= num2 && num1 >= num3);
}

// Function to check if second number is largest
bool isSecondLargest(int num1, int num2, int num3) {
    return (num2 >= num1 && num2 >= num3);
}

// Function to check if third number is largest
bool isThirdLargest(int num1, int num2, int num3) {
    return (num3 >= num1 && num3 >= num2);
}

int main() {
    int num1, num2, num3;
    cout << "Enter your three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << boolalpha; // print true/false instead of 1/0
    cout << "Is the first number the largest? " << isFirstLargest(num1, num2, num3) << endl;
    cout << "Is the second number the largest? " << isSecondLargest(num1, num2, num3) << endl;
    cout << "Is the third number the largest? " << isThirdLargest(num1, num2, num3) << endl;

    return 0;
}