#include <bits/stdc++.h>
using namespace std;

// User Defined Method to generate FizzBuzz results
void generateFizzBuzz(int number, vector<string> &result) {
    for (int i = 1; i <= number; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            result.push_back("FizzBuzz");
        else if (i % 3 == 0)
            result.push_back("Fizz");
        else if (i % 5 == 0)
            result.push_back("Buzz");
        else
            result.push_back(to_string(i));
    }
}

// User Defined Method to print results
void printFizzBuzz(vector<string> &result) {
    for (int i = 0; i < result.size(); i++) {
        cout << "Position " << (i + 1) << " = " << result[i] << endl;
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 0;
    }

    vector<string> result;   // No size initialization

    generateFizzBuzz(number, result);
    printFizzBuzz(result);

    return 0;
}
