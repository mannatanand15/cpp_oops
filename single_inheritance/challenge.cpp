/*
Develop a program that consists of two classes: Tenant and RentEligibility. The Tenant class is the base class and stores the monthly income of a tenant, while the 
RentEligibility class calculates the rental amount based on a specified percentage. In the main function, input the tenant's monthly income and the desired rent percentage.
If the tenant's monthly income is at least Rs. 15,000, the tenant is considered eligible for rent, compute and display the rental amount. 
If the tenant is not eligible, print an appropriate message.
Note: Rental amount = (rent percentage / 100) * monthly income.
Input format :
The first line of input consists of a double value, representing the tenant's monthly income.
The second line consists of a double value, representing the rent percentage.
Output format :
If the tenant is eligible for rent,
The first line of output prints "Eligible".
The second line prints "Rent Amount: X" where X is a double-value, rounded off to two decimal places.
If the tenant is not eligible for rent, print "Not Eligible".
*/
// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Tenant{
public:
    double income;
    Tenant(double in){
        income=in;
    }
};
class RentEligibility : public Tenant{
protected:
double rentpercent;
public:
    RentEligibility(double in,double percent):Tenant(in){
        rentpercent=percent;
    }
    void iseligible(double income,double percent){
        if(income<15000.00){
            cout<<"Not eligible";
        }
        else{
            cout<<"Eligible"<<endl;
            double rent=(percent/100)*income;
            cout<<fixed<<setprecision(2);
            cout<<"Rent Amount: "<<rent;
        }
    }
}; 
int main(){
    double in,percent;
    cin>>in>>percent;
    RentEligibility s (in,percent);
    s.iseligible(in,percent);
    
    return 0;
}
