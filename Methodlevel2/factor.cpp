#include <bits/stdc++.h>
using namespace std;

// Method to find factors and return array
vector<int> findFactors(int n) {
    int count = 0;

    // First loop: count factors
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            count++;
    }

    vector<int> factors(count);

    int index = 0;

    // Second loop: store factors
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            factors[index] = i;
            index++;
        }
    }

    return factors;
}

// Method to find sum
int sumFactors(vector<int> &factors) {
    int sum = 0;
    for(int f : factors)
        sum += f;
    return sum;
}

// Method to find product
long long productFactors(vector<int> &factors) {
    long long product = 1;
    for(int f : factors)
        product *= f;
    return product;
}

// Method to find sum of squares
int sumSquareFactors(vector<int> &factors) {
    int sumSq = 0;
    for(int f : factors)
        sumSq += pow(f, 2);
    return sumSq;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> factors = findFactors(n);

    cout << "\nFactors: ";
    for(int f : factors)
        cout << f << " ";

    cout << "\nSum of factors: " << sumFactors(factors);
    cout << "\nProduct of factors: " << productFactors(factors);
    cout << "\nSum of squares of factors: " << sumSquareFactors(factors);

    return 0;
}
