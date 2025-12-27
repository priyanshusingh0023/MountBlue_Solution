#include<bits/stdc++.h>
using namespace std;
double average(int x, int y, int z){
    double answer= (x+y+z)/3;
    return answer;
}
int  main(){
    int x,y,z;
    cout<<"Enter your three numbers: ";
    cin>>x>>y>>z;
    cout<<average(x,y,z);
    return 0;
}