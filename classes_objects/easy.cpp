/*
Bhuvi is studying geometry, and she wants to determine the type of a triangle based on its side lengths.
She needs your help to write a program using a class Triangle that can classify triangles as equilateral, isosceles, or scalene. 
Equilateral triangle - All sides are equal
Isosceles triangle - Any two sides are equal
Scalene triangle - All sides are different
*/
// You are using GCC
#include<iostream>
using namespace std;

class Triangle{
    int a,b,c;
public:
    void value(){
        cin>>a>>b>>c;
      }
    void checktriangle(){
        if(a==b && b ==c){
            cout<<"Equilateral triangle";
        }
        else if(a==b || b==c ||c==a){
            cout<<"Isosceles triangle";
        }
        else{
            cout<<"Scalene triangle";
        }
    }
};
    
int main(){
    Triangle t;
    t.value();
    t.checktriangle();
}
