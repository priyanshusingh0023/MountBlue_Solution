#include<bits/stdc++.h>
using namespace std;

int maximumHandshakes(int number){
    return (number*(number-1))/2;
} 

int main(){
    int number;
    cout<<"Enter the number of Students:";
    cin>>number;
cout<<maximumHandshakes(number);
}