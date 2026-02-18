#include<bits/stdc++.h>
using namespace std;

bool springSeason(int m, int d) {

    // date validation
    if ((m < 1 || m > 12) || (d < 1 || d > 31)) {
        return false;
    }

    bool isspring =
        (m == 3 && d >= 20) ||
        (m == 4) ||
        (m == 5) ||
        (m == 6 && d <= 20);

    return isspring;
}

int main() {
    int m, d;
    cout << "Enter the Month and Day (in number): ";
    cin >> m >> d;

    cout << boolalpha;
    cout << "Is the Entered Month and Day is: " << springSeason(m, d);
}
