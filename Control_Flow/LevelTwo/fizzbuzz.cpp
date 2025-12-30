#include <bits/stdc++.h>
using namespace std;

void fizzbuzz(int num){
    if(num > 0){
        for(int i = 1; i <= num; i++){
            if(i % 3 == 0 && num % 5 == 0){
                cout << "FizzBuzz\n";
            }
            else if(i % 3 == 0){
                cout << "Fizz\n";
            }
            else if(i % 5 == 0){
                cout << "Buzz\n";
            }
            else{
                cout << i<< "\n";
            }
        }
    }
    else{
        cout << "Given number is not a natural number.\n";
        
    }
}

int main(){
    int num;
    cout << "Enter Your number: ";
    cin >> num;
    fizzbuzz(num);
}
