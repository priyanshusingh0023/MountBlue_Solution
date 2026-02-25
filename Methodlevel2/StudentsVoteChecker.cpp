#include <iostream>
using namespace std;

class StudentVoteChecker {
public:

    // method to check voting eligibility
    bool canStudentVote(int age) {

        // validate negative age
        if (age < 0) {
            return false;
        }

        // check eligibility
        if (age >= 18) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {

    StudentVoteChecker checker;
    int ages[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> ages[i];

        bool result = checker.canStudentVote(ages[i]);

        if (result)
            cout << "Student CAN vote\n";
        else
            cout << "Student CANNOT vote\n";
    }

    return 0;
}
