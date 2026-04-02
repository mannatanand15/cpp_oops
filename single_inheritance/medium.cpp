/*
Create a base class Vehicle and derived classes Car and Motorcycle. 
The rental cost is calculated differently for each vehicle type.
Car rental cost = daily rental rate * number of days
Motorcycle rental cost = daily rental rate * number of days * 0.8 (Applying the 20% discount for motorcycles)
*/
// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Vehicle{
protected:
    double rate;
    int days;
public:
Vehicle(double r,int d){
    rate=r;
    days=d;
};
class Car :public Vehicle{
public:
Car(double r,int d):Vehicle(r,d){
    double cartotal{
        return rate*days;
    }
};
class Motorcyle :public Vehicle{
public:
Motorcycle(double r,int d):Vehicle(r,d){
    double motcost{
        return days*rate;
    }
};
int main(){
    double r1,r2;
    int d1,d2;
    cin>>r1>>r2>>d1>>d2;
    Car c(r1,d1);
    Motorcylce m(r2,d2);
    cout<<fixed<<setprecision(2);
    cout<<"Totall rental cost for the car:"<<c.cartotal()<<endl;
    cout<<"Totall rental cost for the motorcycle:"<<m.motcost();

    
}
    



    
