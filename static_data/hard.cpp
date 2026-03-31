/*Write a program to help Priya calculate the interest for a given balance using the updated interest rate, with the result printed to two decimal places.

Input format :
The first line contains a float value representing the new interest rate.

The second line contains a float value representing the account balance.

Output format :
The output prints a float value representing the calculated interest with two decimal places.
*/

// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class BankAccount{
  static float interestRate; 
  float balance;
public:
    BankAccount(float b){
        balance=b;
    }
    static void setInterestRate(float rate){
        interestRate=rate;
    }
    float calculate(){
        return balance*interestRate;
    }
};
float BankAccount::interestRate=0.03;
int main(){
    float value,amount;
    cin>>value>>amount;
    BankAccount acc(amount);
    acc.setInterestRate(value);
    cout<<fixed<<setprecision(2)<<acc.calculate();
}
