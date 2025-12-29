#include<bits/stdc++.h>
using namespace std;

double calculation(double number){
    double total=0.0;
    
    while(number!=0){
        total=total+number;
        cin>>number;
    }
    return total;
}
int main(){
    double number;
    cout<<"Enter a number (0 to stop sum): ";
    cin>>number;
    cout<<"the sum of number:"<<calculation(number);
    return 0;
}