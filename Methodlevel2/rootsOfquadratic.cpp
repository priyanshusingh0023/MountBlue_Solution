#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// function to find roots
vector<double> findRoots(double a, double b, double c) {
    vector<double> roots;
    double delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        roots.push_back(root1);
        roots.push_back(root2);
    }
    else if (delta == 0) {
        double root = -b / (2 * a);
        roots.push_back(root);
    }
    // if delta < 0 → no real roots

    return roots;
}

int main() {
    double a, b, c;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    vector<double> roots = findRoots(a, b, c);

    if (roots.size() == 2)
        cout << "Two roots: " << roots[0] << " , " << roots[1];
    else if (roots.size() == 1)
        cout << "One root: " << roots[0];
    else
        cout << "No real roots";

    return 0;
}
