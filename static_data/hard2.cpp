/*
Write a program using a class named Circle with the following:
static int circleCount: Counts the total number of Circle objects created.
static int getCircleCount(): Returns the total number of circles created.
void setRadius(double r): Sets the circle's radius.
double calculateArea(): Returns the area of the circle.
double calculateCircumference(): Returns the circumference of the circle.
void displayDetails(): Displays the circle's radius, area, and circumference.
Formula:
Area = 3.14159 * radius * radius
Circumference = 2 * 3.14159 * radius
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Circle{
  double radius;
public:
    //static variable 
    static int circlecount;
    //constructor to increase the value of count 
    Circle(){
        circlecount++;
    }
    static int getCirclecount(){
        return circlecount;
    }
    void setradius(double r){
        radius=r;
    }
    double calculatearea(){
        return 3.14159*radius*radius;
    }
    double circum(){
        return 2*3.14159*radius;
    }
    void display(){
        cout<<fixed<<setprecision(2);
        cout<<"Radius: "<<radius<<endl;
        cout<<"Area: "<<calculatearea()<<endl;
        cout<<"Circumference: "<<circum()<<endl;
    }
};
int Circle::circlecount=0;
int main(){
    //to. keep it as array
    Circle c[5];
    int count;
    cin>>count;
    double rad;
    for(int i=0;i<count;i++){
        cin>>rad;
        c[i].setradius(rad);
    }
    cout<<Circle::getCirclecount()<<endl;
    for(int i=0;i<count;i++){
        c[i].calculatearea();
        c[i].circum();
        c[i].display();
        
    }
    
}
