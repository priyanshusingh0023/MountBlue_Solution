#include<bits/stdc++.h>
using namespace std;

void displayFactor(const vector<int>& factors){
    cout<<"Factors are: ";
    for(int factor : factors){
        cout<<factor<<" ";
    }
    cout<<endl;
}
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    vector<int> factors;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            factors.push_back(i);
        }
    }
    displayFactor(factors);
    return 0;
}