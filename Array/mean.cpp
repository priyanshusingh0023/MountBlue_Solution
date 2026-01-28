#include<bits/stdc++.h>
using namespace std;

double meanHeight(double Height[]){
    double sum,mean;
    for(int i=0;i<=11;i++){
        sum+=Height[i];
    }
     mean=sum/11;
    return mean;
}
int main(){
    double Height[11];
    cout<<"Program to Calculate Mean height: \n";
    for(int i=0;i<=11;i++){
        cout<<"Enter the "<<i+1<<" player Height\n>";
        cin>>Height[i];
    }
    double result=meanHeight(Height);
    cout<<"The Mean height of all players is: "<<result;
    return 0;
}