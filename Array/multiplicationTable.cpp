#include<bits/stdc++.h>
using namespace std;

vector<int> multiplicationtable(int num){
    vector<int> table(10);
        for(int i=1;i<=10;i++){
            table[i]=num*i;
        }
    return table;
}
int main(){
    int num;
    cout<<"Enter Your Number: \n";
    cin>>num;
    vector<int>table=multiplicationtable(num);
    for(int i=1;i<=10;i++){
        cout<<num<<" * "<<i<<" = "<<table[i]<<endl;
    }
    return 0;
}

