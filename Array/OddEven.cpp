#include<bits/stdc++.h>
using namespace std;
void Evenodd(int num){
    if(num<0){
        cout<<"Invalid ";
    }
    else if(num%2==0){
        cout<<num<<"Even"<<endl;
    }
    else{
        cout<<num<<"Odd"<<endl;
    }
}
void compareElement(int num[],int n){
        int first=num[0];
        int last=num[n-1];
        if(first>last){
            cout<<first<<" is Greater";
        }
        else if(last>first){
            cout<<last<<" is Greater";
        }
        else{
            cout<<"Both are equal";
        }
}

int main(){
    int num[5];
    cout<<"Enter Five numbers: \n";
    
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    for(int i=0;i<5;i++){
        Evenodd(num[i]);
    }
    compareElement(num,5);
    return 0;

}