#include<bits/stdc++.h>
using namespace std;

const int size = 10;

void inputData(vector<double> &salary, vector<double> &serviceYear) {
    for(int i = 0; i < size; i++) {
        cout << "\nEnter Details for Employee " << i + 1 << endl;

        cout << "Enter Salary: ";
        cin >> salary[i];

        cout << "Enter Year of Service: ";
        cin >> serviceYear[i];

        if(serviceYear[i] <= 0 || salary[i] <= 0) {
            cout << "Invalid input! Try Again.\n";
            i--;
        }
    }
}

void calculateBonus(vector<double> &salary, vector<double> &serviceYear,
                    vector<double> &newSalary, vector<double> &Bonus,
                    double &totalBonus, double &totalOldSalary, double &totalNewSalary) {

    for(int i = 0; i < size; i++) {
        if(serviceYear[i] > 5)
            Bonus[i] = salary[i] * 0.05;
        else
            Bonus[i] = salary[i] * 0.02;

        newSalary[i] = salary[i] + Bonus[i];

        totalBonus += Bonus[i];
        totalOldSalary += salary[i];
        totalNewSalary += newSalary[i];
    }
}

int main() {
    vector<double> salary(size), serviceYear(size), newSalary(size), Bonus(size);

    double totalBonus = 0, totalOldSalary = 0, totalNewSalary = 0;

    inputData(salary, serviceYear);

    calculateBonus(salary, serviceYear, newSalary, Bonus,
                   totalBonus, totalOldSalary, totalNewSalary);

    cout << "\nTotal Old Salary: " << totalOldSalary << endl;
    cout << "Total Bonus Paid: " << totalBonus << endl;
    cout << "Total New Salary: " << totalNewSalary << endl;

    return 0;
}
