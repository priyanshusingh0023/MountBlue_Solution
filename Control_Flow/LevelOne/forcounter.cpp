#include<bits/stdc++.h>
using namespace std;

void counter(int c){
    for(int i=1;i<=c;c--){
        cout<<c<<endl;
    }
    cout<<"HURRY Rocket launch!";
}
int main(){
    int c;
    cout<<"Enter your counter number:";
    cin>>c;
    counter(c);
    return 0;
}