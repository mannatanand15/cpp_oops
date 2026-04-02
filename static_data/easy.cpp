/*
Initially, these static members are set to 10 and 20, respectively. 
In the program, Bobby wants to allow users to update these static values dynamically by inputting new integers. 
Your task is to help Bobby to create a class includes two static member functions: get(), which accepts new values for X and Y from the user, and fun(), 
which displays the current values of X and Y. The program should first show the initial values, allow the user to input new values, and then display the updated values.

Input format :
The first line of input consists of the value of X.

The second line of input consists of the value of Y.

Output format :
The first line of output prints "Value of X: " followed by an integer representing the value of X.

The second line of output prints "Value of Y: " followed by an integer representing the value of Y.
*/
#include<iostream>
using namespace std;
class Demo
{
    static int X;
    static int Y;
public:
static void get(){
    cin>>X;
    cin>>Y;
}
static void fun(){
    cout<<"Value of X:"<<X<<endl;
    cout<<"Value of Y:"<<Y<<endl;
}
};

int Demo::X=10;
int Demo::Y=20;
int main(){
    Demo::fun();
    Demo::get();
    Demo::fun();
    
}
