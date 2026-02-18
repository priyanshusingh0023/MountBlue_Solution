#include<bits/stdc++.h>
using namespace std;

pair<int,int> remainderAndQuotient(int numberOfChocolate, int numberOfStudents){
    int remainingChocolate = numberOfChocolate % numberOfStudents;
    int chocolatePerStudent = numberOfChocolate / numberOfStudents;
    return {chocolatePerStudent, remainingChocolate};
}

int main(){
    int numberOfChocolate;
    cout<<"Enter the number of chocolates: ";
    cin>>numberOfChocolate;

    int numberOfStudents;
    cout<<"Enter the number of students: ";
    cin>>numberOfStudents;

    if(numberOfStudents == 0){
        cout<<"Number of students cannot be zero!";
        return 0;
    }

    pair<int,int> result = remainderAndQuotient(numberOfChocolate, numberOfStudents);

    cout<<"Chocolate per student is: "<<result.first<<endl;
    cout<<"Remaining chocolates are: "<<result.second<<endl;

    return 0;
}
