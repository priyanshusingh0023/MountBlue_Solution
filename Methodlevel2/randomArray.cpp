#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// generate random 4 digit numbers
vector<int> generate4DigitRandomArray(int size) {
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 9000 + 1000;
    }
    return arr;
}

// find average, min and max
vector<double> findAverageMinMax(const vector<int>& numbers) {
    int minVal = numbers[0];
    int maxVal = numbers[0];
    int sum = 0;

    for (int num : numbers) {
        sum += num;
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }

    double avg = (double)sum / numbers.size();

    return {avg, (double)minVal, (double)maxVal};
}

int main() {
    srand(time(0));  // seed for randomness

    vector<int> numbers = generate4DigitRandomArray(5);

    cout << "Generated Numbers:\n";
    for (int n : numbers)
        cout << n << " ";

    vector<double> result = findAverageMinMax(numbers);

    cout << "\nAverage = " << result[0];
    cout << "\nMinimum = " << result[1];
    cout << "\nMaximum = " << result[2];

    return 0;
}
