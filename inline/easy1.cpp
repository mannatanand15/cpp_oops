/*
Help her solve the code for the following question statement: Create an inline function isLeapYear() to check if a given year is a leap year.
*/
// You are using GCC
#include<iostream>
using namespace std;
inline void isleap(int a){
    if((a %4==0 && a%100 !=0 ) || (a%400 ==0)){
        cout<<a<<" is a leap year.";
    }
    else{
        cout<<a<<" is not a leap year.";
    }
  
}
int main(){
    int year;
    cin>>year;
    isleap(year);
}
