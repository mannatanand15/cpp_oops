/*
Riya is designing a room layout for her new apartment. She needs to calculate the area of various rooms, which are rectangular. 
To simplify her work, she decides to create a Rectangle class with the following features:
Private attributes length and breadth to store the dimensions of the rectangle.
A constructor to initialize these attributes.
A friend function void calcArea(Rectangle s) to calculate and display the area of the rectangle.
*/
#include<iostream>
using namespace std;
class Rectangle{
int length;
int breadth;
public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
friend void calcArea(Rectangle s);
};
void calcArea(Rectangle s){
// we can't return an object in void function
    cout<<s.length*s.breadth;
}
int main(){
    int l,b,area;
    cin>>l>>b;
    Rectangle s(l,b);
    calcArea(s);
   
}
