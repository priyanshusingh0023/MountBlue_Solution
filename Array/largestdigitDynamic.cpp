#include<bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter number:\n";
    cin>>number;

    const int maxdigit=10;
    int digits[maxdigit];
    
    int index=0;

    while(number!=0){
        if(index==maxdigit){
            maxdigit=maxdigit+maxdigit;
        }

        i
        //store last digit
        digits[index]=number%10;

        //remove last digit
        number=number/10;

        //increase index
        index++;
    }

    //Initialize largest and Second largest
    int largest=0;
    int secondlargest=0;

    //find largest and second largest
    for(int i=0;i<index;i++){
        if(digits[i]>largest){
            secondlargest=largest;
            largest=digits[i];
        }
        else if(digits[i]>secondlargest && digits[i]!=largest){
            secondlargest=digits[i];
        }
    }

    cout<<"Largest digit: "<<largest<<endl;
    cout<<"Second Largest digit: "<<secondlargest<<endl;
}