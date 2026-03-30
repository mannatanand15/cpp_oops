/*
You are building a shipping application for an online store and need to calculate the volume of a box. Implement a Box class with a private attribute length. The class should include:
A constructor initializes length to 0.
A member function get() to input the length.
A friend function printVolume(Box) calculates and returns the volume as length^3.
*/
#include<iostream>
using namespace std;
class Box{
private:
int length;
public:
//constructor use
Box(){
    length=0;
}
void get(){
    cin>>length;
}
friend int volume(Box b);

};
int volume(Box b){
    return b.length*b.length*b.length;
}
int main(){
    Box s;
    s.get();
    cout<<volume(s);
}
