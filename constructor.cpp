/*
Lolita wants to write a program to define a Rectangle class that represents rectangles in a 2D space. 
The class should have private attributes to store the coordinates of two points, (llx, lly) representing the lower-left corner and (urx, ury) 
representing the upper-right corner of the rectangle.
When the Rectangle object is created, the output displays: "Rectangle created."
After creating the Rectangle object, the output displays "Area of the rectangle: " followed by the area of the rectangle (integer).
When the Rectangle object is destroyed, the output displays "Rectangle destroyed."
*/
// You are using GCC
#include<iostream>
using namespace std;
class Rectangle{
  int llx,lly,urx,ury;
public:
    Rectangle(int a,int b,int c,int d){
        llx=a;
        lly=b;
        urx=c;
        ury=d;
        cout<<"Rectangle created."<<endl;
    }
    int area(){
        int width;
        int height;
        width=abs(urx-llx);
        height=abs(ury-lly);
        return width*height;
    }
    ~Rectangle(){
        cout<<"Rectangle destroyed.";
        
    }
};
int main(){
    int llx,lly,urx,ury;
    cin>>llx>>lly;
    cin>>urx>>ury;
    Rectangle r1(llx,lly,urx,ury);
    cout<<"Area of the rectangle: "<< r1.area()<<endl;
    
}
