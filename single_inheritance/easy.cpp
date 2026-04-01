/*
Arvind is designing a program to calculate electrical power and efficiency, and he needs your help. Create a base class P with voltage and current attributes to compute power. 
Implement a derived class PE with an efficiency attribute to determine useful and wasted power.  
Write a program to help him accomplish the task.
Formulas
Power = Voltage * Current
Useful Power = Power * Efficiency
Wasted Power = Power * (1.0 - Efficiency)
*/
// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class P{
public:
    double volt;
    double current;
    P(double v,double i){
        volt=v;
        current=i;
    }
};
class PE: public P{
private:
double efficiency;
public:
    PE(double v,double i,double e):P(v,i){
        efficiency=e;
    }
    double power(){
        return volt*current;
    }
    //power is a function not a variable so 
    double usepower(){
        return power()*efficiency;
    }
    double waste(){
        return power()*(1.0-efficiency);
    }
    
};
int main(){
    double v,i,e;
    cin>>v>>i>>e;
    //while calling it we must give all constuctor values also
    PE m(v,i,e);
    
    cout<<fixed<<setprecision(1);
    cout<<"Power: "<<m.power()<<"W"<<endl;
    cout<<"Useful Output Power: "<<m.usepower()<<"W"<<endl;
    cout<<"Wasted Power: "<<m.waste()<<"W"<<endl;
}
