#include <bits/stdc++.h>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    long long temp = num;

    // Step 1: Count digits
    int count = 0;
    while(temp > 0){
        count++;
        temp /= 10;
    }

    // Step 2: Store digits in array
    int digits[count];
    temp = num;

    for(int i = 0; i < count; i++){
        digits[i] = temp % 10;   // extract digit
        temp /= 10;
    }

    // Step 3: Frequency array (0–9)
    int freq[10] = {0};

    // Step 4: Calculate frequency
    for(int i = 0; i < count; i++){
        freq[digits[i]]++;
    }

    // Step 5: Display frequency
    cout << "\nDigit Frequencies:\n";
    for(int i = 0; i < 10; i++){
        if(freq[i] > 0){
            cout << "Digit " << i << " occurs " << freq[i] << " times\n";
        }
    }

    return 0;
}
