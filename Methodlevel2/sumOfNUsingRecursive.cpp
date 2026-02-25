#include <bits/stdc++.h>
using namespace std;

// Recursive function to find sum
int sumRecursive(int n){
    if(n == 1)        // base case
        return 1;
    return n + sumRecursive(n - 1);
}

// Function using formula
int sumFormula(int n){
    return n * (n + 1) / 2;
}

int main(){
    int n;

    cout << "Enter a natural number: ";
    cin >> n;

    // Check natural number
    if(n <= 0){
        cout << "Please enter a natural number (>0)";
        return 0;
    }

    int recursiveSum = sumRecursive(n);
    int formulaSum = sumFormula(n);

    cout << "\nSum using Recursion = " << recursiveSum << endl;
    cout << "Sum using Formula   = " << formulaSum << endl;

    // Compare results
    if(recursiveSum == formulaSum)
        cout << "✅ Both results are CORRECT and MATCH.";
    else
        cout << "❌ Results do not match.";

    return 0;
}
