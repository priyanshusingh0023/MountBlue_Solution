#include<bits/stdc++.h>
using namespace std;
pair<int,int> findRemainderAndQuotient(int dividend,int divisor){
    int Remainder=dividend%divisor;
    int quatient=dividend/divisor;
    return {Remainder,quatient};
}