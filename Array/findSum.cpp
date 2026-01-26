#include "iostream"
#include <vector>
using namespace std;
double findSum(vector<double> store){
    double sum = 0.0;
 for(int i = 0; i < store.size(); i++){
    sum +=store[i];

 }
 return sum;
}
int main(){
    double num;
    vector<double> store;
    int counter=0;
    while(true){
        cout<<"Enter the number: \n>";
        cin>>num;
        if(num<=0) break;
        else {
            store.push_back(num);
            counter++;
        }
        if(counter==10) break;
    }
 double total = findSum(store);
 cout<<total<<endl;
 return 0;
}
