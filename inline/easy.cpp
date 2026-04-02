/*
Write a C++ program that uses an inline function to calculate the sum of the squares of the first n even and odd numbers. The program should take an input value of n from the user and output the result. You need to implement the necessary 
functions and ensure that the program handles the computation accurately.
Function specifications:
inline int sumOfSquaresEven - calculates the sum of squares of the first n even numbers
The input consists of a positive integer N.

Output format :
The first line of output displays the sum of squares of the first N even numbers.

The second line of output displays the sum of squares of the first N odd numbers.
inline int sumOfSquaresOdd - calculates the sum of squares of the first n odd numbers
*/
// You are using GCC
#include<iostream>
using namespace std;
inline int sumOfSquaresEven(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        int even=2*i;
        sum+=even*even;
    }
    return sum;
}
inline int sumOfSquaresOdd(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        int odd=2*i-1;
        sum+=odd*odd;
    }
    return sum;
}
int main(){
    int num;
    cin>>num;
    cout<<sumOfSquaresEven(num)<<endl;
    cout<<sumOfSquaresOdd(num);
}

