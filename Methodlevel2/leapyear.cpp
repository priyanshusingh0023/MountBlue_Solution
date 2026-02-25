#include <bits/stdc++.h>
using namespace std;

bool leapyear(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main(){
    int year;
    cout << "Enter the Year: ";
    cin >> year;

    if(year < 1582){
        cout << "Invalid Year Entered!";
        return 0;  // Exit early
    }

    cout << boolalpha;
    bool result = leapyear(year);
    cout << "Entered year " << year << " is " << result;

    return 0;
}
