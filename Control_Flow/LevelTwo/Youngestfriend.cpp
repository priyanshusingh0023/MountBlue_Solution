#include<bits/stdc++.h>
using namespace std;
 string findyoungest(int ageAmar,int ageAkbar,int ageAntony){
    if(ageAmar<ageAkbar && ageAmar<ageAntony){
        return "Amar";
    }
    else if(ageAkbar<ageAmar && ageAkbar<ageAntony){
        return "Akbar";
    }
    else{
        return "Antony";
    }
 }

 string findtallest(int heightAmar,int heightAkbar,int heightAntony){
    if(heightAmar>heightAkbar && heightAmar>heightAntony){
        return "Amar";
    }
    else if(heightAkbar>heightAmar && heightAkbar>heightAntony){
        return "Akbar";
    }
    else{
        return "Antony";
    }
 }

 int main(){
    int ageAmar,ageAkbar,ageAntony;
    int heightAmar,heightAkbar,heightAntony;
    
    cout<<"Enter Amar's age and height in cm: ";
    cin>>ageAmar>>heightAmar;
    cout<<"Enter Akbar's age and height in cm: ";
    cin>>ageAkbar>>heightAmar;
    cout<<"Enter Antony's age and height in cm: ";
    cin>>ageAntony>>ageAntony;

    string youngest= findyoungest(ageAmar,ageAkbar,ageAntony);
    string tallest=findtallest(heightAmar,heightAkbar,heightAntony);

    cout<<"The Youngest Person in Friends group-> "<<youngest<<endl;
    cout<<"The Tallest Person in friend's group-> "<<tallest<<endl;
    return 0;
 }