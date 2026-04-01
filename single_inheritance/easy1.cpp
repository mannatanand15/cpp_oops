/*
Create a base class named Circle with the protected attribute radius representing the radius of a circle. The class should provide a constructor to initialize the 
radius and a method to retrieve the radius value.
Inherit from the Circle class to create a derived class named Cylinder. The Cylinder class should introduce a private attribute height representing the height of the cylindrical sculpture.
Implement a volume() method inside the Cylinder class to calculate the volume of the cylinder.
Formula: Volume = 3.14 * radius2 * height.
*/
// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Circle{
protected:
    double radius;
public:
//constructor 
    Circle(double r){
        radius=r;
    }
};
//children->parent
class Cylinder : public Circle{
private:
    double height;
public:
// make a constructor in derived class
    Cylinder(double r,double h):Circle(r){
        height=h;
    }
    double volume(){
        return 3.14*radius*radius*height;
    }
};

int main(){
    //base class has constructor  with parameters so derived class must call it 
    double r,h;
    cin>>r>>h;
    // Cylinder s;  //wrong
    Cylinder s(r,h);
    cout<<fixed<<setprecision(2)<<s.volume();
    
}
