#include<bits/stdc++.h>
using namespace std;
pair<int,int> greatestOfthree(int a,int b, int c){
    int smallest=a;
    int largest=a;
    if(b<smallest) smallest=a;
    if(c<smallest) smallest=c;

    if(b>largest) largest=b;
    if(c>largest) largest=c;

    return {smallest,largest};
        
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    pair<int,int> result=greatestOfthree(a,b,c);
    cout<<"The Smallest number is: "<<result.first<<endl;
    cout<<"The greatest number is: "<<result.second;


}