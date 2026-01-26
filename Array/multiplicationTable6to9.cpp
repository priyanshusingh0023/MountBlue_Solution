#include<bits/stdc++.h>
using namespace std;

vector<int> multiplicationTable(int num){
    vector<int> table(5);
    for(int i=6;i<=9;i++){
        table[i]=num*i;
    }
    return table;
}
int main(){
    int num;
    cout<<"Enter your number: \n";
    cin>>num;
    vector<int> result=multiplicationTable(num);
    for(int i=6;i<=9;i++){
        cout<<num<<" * "<<i<<" = "<<result[i]<<endl;
    }
    return 0;
}