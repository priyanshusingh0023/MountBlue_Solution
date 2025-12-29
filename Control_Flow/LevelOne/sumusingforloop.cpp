#include<bits/stdc++.h>
using namespace std;

int sumusingfor(int num){
    int total=0;
    for(int i=1;i<=num;i++){
        total+=i;
    }
    return total;
}
int main(){
    int num,formularesult;
    cout<<"Enter natural number: ";
    cin>>num;

    if(num<=0){
        cout<<"Invalid number or not a natural no. \n";
    }
    else{
        formularesult = num*(num+1)/2;
    }
    int loopresult=sumusingfor(num);

    if(formularesult==loopresult){
        cout<<"The sum of natural no. by using forloop & formula is:\n"<<loopresult;
    }
    else{
        cout<<"Something is wrong at our end!";
    }
    return 0;
}