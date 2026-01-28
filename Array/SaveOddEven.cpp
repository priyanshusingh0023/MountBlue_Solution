#include<bits/stdc++.h>
using namespace std;

void saveOddEven(int num){
        if(num<0){
        cout<<"Error";
        return;
     }
     else{
    int size=(num/2)+1;
    int odd[size],even[size];
    int oddIndex=0, evenIndex=0;
    for(int i=1; i<=num;i++){
        if(i%2==0){
            even[evenIndex++] = i;
        }
        else{
            odd[oddIndex++] = i;
        }
    }
    cout<<"Odd numbers: ";
    for(int i=0; i<oddIndex; i++){
        cout<<odd[i]<<" ";
    }
    cout<<"\nEven numbers: ";
    for(int i=0; i<evenIndex; i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
}
}
int main(){
    int num;
    cout<<"Enter the Number upto you want to save Even & Odd number:\n";
    cin>>num;
    saveOddEven(num);
}