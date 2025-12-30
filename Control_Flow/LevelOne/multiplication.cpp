#include <iostream>
using namespace std;

void multiplication(int num) {
    for (int i = 6; i <= 9; i++) {
        cout << num << " * " << i << " = " << num * i << "\n";
    }
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    multiplication(num);
    return 0;
}
