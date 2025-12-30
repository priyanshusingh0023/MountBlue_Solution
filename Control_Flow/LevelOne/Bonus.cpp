#include <bits/stdc++.h>
using namespace std;

void Bonus(int salary, int year) {
    double Bonus_Amount;

    if (year > 5) {
        Bonus_Amount = salary * 0.05;  // 5% bonus
        cout << "Your Bonus Amount is: " << Bonus_Amount << endl;
    } else {
        cout << "Your year of service is not more than 5 years, so you're not eligible for bonus!" << endl;
    }
}

int main() {
    int salary, year;

    cout << "Enter your Salary here: ";
    cin >> salary;

    cout << "Enter your year of Service here: ";
    cin >> year;

    Bonus(salary, year);

    return 0;
}
