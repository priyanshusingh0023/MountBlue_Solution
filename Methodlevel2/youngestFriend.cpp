
#include <iostream>
using namespace std;

class FriendChecker {
public:

    // Method to find youngest friend
    static int findYoungest(int ages[]) {
        int minIndex = 0;

        for (int i = 1; i < 3; i++) {
            if (ages[i] < ages[minIndex]) {
                minIndex = i;
            }
        }
        return minIndex;
    }

    // Method to find tallest friend
    static int findTallest(double heights[]) {
        int maxIndex = 0;

        for (int i = 1; i < 3; i++) {
            if (heights[i] > heights[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};

int main() {

    string names[3] = {"Amar", "Akbar", "Anthony"};
    int ages[3];
    double heights[3];

    // taking input
    for (int i = 0; i < 3; i++) {
        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];

        cout << "Enter height of " << names[i] << " (in cm): ";
        cin >> heights[i];
    }

    // finding results
    int youngestIndex = FriendChecker::findYoungest(ages);
    int tallestIndex = FriendChecker::findTallest(heights);

    cout << "\nYoungest friend: " << names[youngestIndex] << endl;
    cout << "Tallest friend: " << names[tallestIndex] << endl;

    return 0;
}
