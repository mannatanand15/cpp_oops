/*
Srikar recently started learning mathematics and wants to quickly find the square, square root, cube, and cube root of a given number to solve his homework problems.
He decides to write a program that takes an integer input and displays all these values.
The first line of output prints: "square = " followed by square
The second line of output prints: "square root = " followed by square_root
The third line of output prints: "cube = " followed by cube
The fourth line of output prints: "cube root = " followed by cube_root
*/
// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;
class operations{
  int num;
public:
    operations(int n){
        num=n;
    }
    void square(){
        cout<<"square = "<<num*num<<endl;
    }
    void sqroot(){
        cout<<"square root = "<<sqrt(num)<<endl;
    }
    void cube(){
        cout<<"cube = "<<num*num*num<<endl;
    }
    void cuberoot(){
        cout<<"cube root = "<<cbrt(num)<<endl;
    }
};
  

int main(){
    cout<<"Inside Constructor"<<endl;
    int n;
    cin>>n;
    operations s(n);
    s.square();
    s.sqroot();
    s.cube();
    s.cuberoot();
    cout<<"Inside Destructor";
    
}
