#include <bits/stdc++.h>
using namespace std;

void voting(int age){
    if(age>=18){
        cout<<"The person's age is "<<age<<" can vote"<<endl;
    }
    else{
        cout<<"The person's age is "<<age<<" cannot vote"<<endl;
    }
}
int main(){
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    voting(age);
    return 0;
}