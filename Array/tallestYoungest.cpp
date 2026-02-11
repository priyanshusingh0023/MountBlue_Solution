#include <bits/stdc++.h>
using namespace std;

int Tallest(double Heights[], int size) {
    int tallestindex = 0;
    for (int i = 1; i < size; i++) {
        if (Heights[i] > Heights[tallestindex]) {
            tallestindex = i;
        }
    }
    return tallestindex;
}

int youngest(int Ages[], int size) {
    int youngestindex = 0;
    for (int i = 1; i < size; i++) {
        if (Ages[i] < Ages[youngestindex]) {
            youngestindex = i;
        }
    }
    return youngestindex;
}

int main() {
    int size;
    cout << "Enter Size: ";
    cin >> size;

    int Ages[size];
    double Heights[size];
    string names[] = {"Amar", "Akbar", "Anthony"};

    for (int i = 0; i < size; i++) {
        cout << "Enter the Age of " << names[i] << ": ";
        cin >> Ages[i];

        cout << "Enter the Height of " << names[i] << ": ";
        cin >> Heights[i];
    }

    int tallest = Tallest(Heights, size);
    int Youngest = youngest(Ages, size);

    cout << "\nThe Tallest Among Three is: " << names[tallest];
    cout << "\nThe Youngest Among Three is: " << names[Youngest];

    return 0;
}
