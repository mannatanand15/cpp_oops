/*
Design a program using a template class BankAccount to calculate interest.

Data members: balance, interestRate
Input:
Initial balance
Interest rate
Task:
Set and get balance & interest rate

Calculate interest using:

Interest
=
balance
×
interestRate
100
Interest=
100
balance×interestRate
	​

Compute balance after one year
Output:
"Balance after one year: Z"
"Interest earned after one year: X"
*/
#include <iostream>
using namespace std;

template <typename T>
class BankAccount {
private:
    T balance;
    T interestRate;

public:
    void setBalance(T b) {
        balance = b;
    }

    void setInterestRate(T r) {
        interestRate = r;
    }

    T getBalance() {
        return balance;
    }

    T getInterestRate() {
        return interestRate;
    }

    T calculateInterest() {
        return (balance * interestRate) / 100;
    }
};

int main() {
    int balance, rate;
    cin >> balance >> rate;

    BankAccount<int> acc;

    acc.setBalance(balance);
    acc.setInterestRate(rate);

    int interest = acc.calculateInterest();
    int finalBalance = balance + interest;

    cout << "Balance after one year: " << finalBalance << endl;
    cout << "Interest earned after one year: " << interest;

    return 0;
}
/*Design a program using a template class Pair to store two values (float and double).

Input:
One float value
One double value
Task:
Store values using template class
Display values before swap
Swap the two values
Display values after swap
Output:
Show First and Second values before and after swapping
*/
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
    }

    void swapValues() {
        auto temp = first;
        first = second;
        second = temp;
    }
};

int main() {
    float a;
    double b;

    cin >> a >> b;

    Pair<float, double> p(a, b);

    cout << "Values before swap: " << endl;
    p.display();

    p.swapValues();

    cout << "Values after swap: " << endl;
    p.display();

    return 0;
}
