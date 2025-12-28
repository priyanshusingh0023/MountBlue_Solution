#include <bits/stdc++.h>
using namespace std;

bool springseason(int m,int d){
    bool isspring= ((m>=3 && m<6 && d>=20 && d<=31) || (m==6 && d<=20));
    return isspring;
}
int main(){
    int m,d;
    cout<<"Enter the month number and day:";
    cin>>m>>d;
    cout<<boolalpha;
    cout<<"Is the month is spring?: "<<springseason(m,d);
    return 0;
}