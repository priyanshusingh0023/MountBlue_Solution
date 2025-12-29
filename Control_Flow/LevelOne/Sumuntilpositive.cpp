#include<bits/stdc++.h>
using namespace std;

double sumuntilpositive(){
    double total=0.0;
    double number;
    while(true){
        cin>>number;
        if(number<=0){
            break;
        }
        total+=number;
    }
    return total;
}
int main(){
    cout<<"Enter numbers for sum (0 or negative to stop): "<<endl;
    cout<<"The sum of positive numbers is: "<<sumuntilpositive();
    return 0;
}