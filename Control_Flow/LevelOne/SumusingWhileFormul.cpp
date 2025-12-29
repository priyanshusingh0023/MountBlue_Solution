#include <bits/stdc++.h>
using namespace std;
 int sumusingwhile(int n){
    int total=0;
    int i=1;
    while(i<=n){
        total+=i;
        i++;
    }
    return total;
 }
 int main(){
    int n,formularesult ;
    cout<<"Enter a natural number: ";
    cin>>n;

    if(n<=0){
        cout<<"Invalid natural number please try again: ";
    }
    else{
         formularesult = n*(n+1)/2;
    }
    int loopresult=sumusingwhile(n);

    if(formularesult==loopresult){
        cout<<"here is the equal result of sum using while loop and fromula: "<<loopresult;
    }
    else{
        cout<<"Something went wrong at our end !";
    }
    return 0;
 }