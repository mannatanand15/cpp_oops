/*
Write a program to calculate the updated salary of an employee after a salary hike meeting. 
  The current salary is computed by totaling the previous salary and the hike percentage of the previous salary.
Function Name: void currentSalary(int **rate ,int **salary)

Input format :
The first line of input consists of an integer representing the hike percentage.

The second line of input consists of an integer representing the old salary.

Output format :
The output prints the new salary after the hike, formatted to two decimal places.
  */
// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
//double pointer is used which is a pointer to a pointer
void currentSalary(int **rate,int **salary){
    double r=**rate;
    double s=**salary;
    int value=r/100.0;
    double total;
    total=(s*r/100)+s;
    cout<<fixed<<setprecision(2);
    cout<<total;
}

int main(){
    int rate,salary;
    cin>>rate>>salary;
    //i have taken input now as it is double pointer toh value assign krni hogi
    int *prate=&rate;
    int *psalary=&salary;
    currentSalary(&prate,&psalary);
}
