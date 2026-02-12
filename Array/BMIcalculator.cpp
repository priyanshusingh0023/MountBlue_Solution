#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number of Persons: \n";
    cin>>number;

    vector<double> weight;
    vector<double> height;
    vector<double> bmi;
    vector<string> status;
    for(int i=0;i<number;i++){
        double w,h;
        cout<<"Enter the weight of the "<<i+1<<" person\n";
        cin>>w;
        weight.push_back(w);

        cout<<"Enter the height of the "<<i+1<<" person\n";
        cin>>h;
        height.push_back(h);
    }

    for(int i=0;i<number;i++){
      double bmi_value=weight[i]/(height[i]*height[i]);
      bmi.push_back(bmi_value);

        if(bmi_value<18.5){
            status.push_back("Underweight");
        }
        else if(bmi_value > 18.5 &&bmi_value<25){
            status.push_back("Normal");
        }
        else if(bmi_value<25 &&bmi_value<39.9){
            status.push_back("Overweight");
        }
        else{
            status.push_back("Obese");
        }
    }

    for(int i=0;i<number;i++){
        cout<<i+1<<" Person: \n";
        cout<<"Weight: "<<weight[i]<<"\n";
        cout<<"Height: "<<height[i]<<"\n";
        cout<<"Body Mass Index(BMI): "<<bmi[i]<<"\n";
        cout<<"Status: "<<status[i]<<"\n";
    }

return 0;
}