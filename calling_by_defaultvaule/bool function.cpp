/*
For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.

15 is not a perfect number because its proper divisors are 1, 3, 5, and 1 + 3 + 5 = 9.
Function Signature
bool isPerfect(int n, int default_value = 1)
*/
#include<iostream>
using namespace std;
bool isPerfect(int n,int default_value=1){
    int sum=default_value;
    if(n==1){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    int num;
    cin>>num;
    
    //1 is the divisor for all numbers so start from 2
    if(isPerfect(num)){
        cout<<num<<" is a perfect number";
    }
    else{
        cout<<num<<" is not a perfect number";
    }
}
