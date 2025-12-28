#include <bits/stdc++.h>
using namespace std;

void counter(int c){
    while(c>=1){
        cout<<c<<endl;
        c--;
    }
    cout<<" Rocket launch ";

}
int main(){
    int c;
    cout<<"Enter counter number: ";
    cin>>c;
    counter(c);
    return 0;
}