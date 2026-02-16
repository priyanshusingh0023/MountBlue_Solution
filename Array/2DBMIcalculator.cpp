#include<bits/stdc++.h>

using namespace std;

int main(){
    int number;
    cout<<"Enter number of persons: ";
    cin>>number;

    double personData[number][3];
    string WeightStatus[number];

    for(int i = 0; i < number; i++ ){
        cout<<"\nPerson "<< i+1 << endl;

        // weight input
        do{
            cout<<"Enter weight in kg: ";
            cin >> personData[i][0];
            if(personData[i][0] <= 0){
                cout<<"Please enter positive value!\n";
            }
        } while(personData[i][0] <= 0);

        // height input
        do{
            cout<<"Enter height in meters: ";
            cin >> personData[i][1];
            if(personData[i][1] <= 0){
                cout<<"Please enter positive value!\n";
            }
        } while(personData[i][1] <= 0);
    }

    // BMI calculation & status
    for(int i=0; i<number; i++){
        double weight = personData[i][0];
        double height = personData[i][1];

        personData[i][2] = weight/(height*height);

        if(personData[i][2] < 18.5)
            WeightStatus[i] = "Underweight";
        else if(personData[i][2] < 25)
            WeightStatus[i] = "Normal";
        else if(personData[i][2] < 30)
            WeightStatus[i] = "Overweight";
        else
            WeightStatus[i] = "Obese";
    }

    // display
    cout<<"\n----- BMI REPORT -----\n";

    for(int i=0; i<number; i++){
        cout<<"\nPerson " << i+1 << endl;
        cout<<"Weight: " << personData[i][0] << " kg\n";
        cout<<"Height: " << personData[i][1] << " m\n";
        cout<<"BMI: " << personData[i][2] << endl;
        cout<<"Status: " << WeightStatus[i] << endl;
    }

    return 0;
}
