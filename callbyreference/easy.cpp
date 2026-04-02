/*
Mandy wants to calculate the factorial of a number and the sum of its digits. Help her with a program for the same using a call-by-reference function.



Write a program that takes an integer as input and computes both the factorial and the sum of its digits.

Input format :
The input consists of an integer N representing the number for Mandy's calculations.

Output format :
The first line prints "Factorial: " followed by an integer which is the factorial of the given number N.

The second line prints "Sum of digits of the factorial: " followed by an integer which is the sum of the digits of the factorial.
*/
// You are using GCC
//the values who need to be updated automatically
#include<iostream>
using namespace std;
void calculateFactorialAndSum(int n,int &fac,int &sum){
    fac=1;
    for(int i=1;i<=n;i++){
       fac=fac*i;
    }
    int temp=fac;
    sum=0;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }
}
int main(){
    int n,fac,sum;
    cin>>n;
    calculateFactorialAndSum(n,fac,sum);
    cout<<"Factorial: "<<fac<<endl;
    cout<<"Sum of digits of the factorial: "<<sum;
}
