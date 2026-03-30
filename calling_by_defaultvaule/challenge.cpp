/*
Implement a Hotel Booking System that allows Sneha to input her preferences and get the total cost of her stay.
Functions specifications
double calculateRoomCharges - To calculate the room charges based on room type and the number of nights.
double calculateMealExpenses - To calculate meal expenses based on whether meals are included.
double calculateServiceCosts - To calculate service costs based on whether services are included.
*/
#include<iostream>
#include<iomanip>
using namespace std;
double calculateRoom(int n,int days){
    double cost=0.0;
    if(n==1){
        cost=100.0;
    }
    else if(n==2){
        cost=150.0;
    }
    else if(n==3){
        cost=250.0;
    }
    else{
        cout<<"No rooms"<<endl;
    }
    return cost*days;
}
double calculatemeals(int s,int days){
    if(s==1){
        return 30.0;
    }
    else{
        return 0.0;
    }
}
double service(int m,int days){
    if(m==1){
        return 50.0;
    }
    else{
        return 0.0;
    }
}
int main(){
    double total=0.00;
    int n,days,s,m;
    cin>>n>>days>>s>>m;
    double room=calculateRoom(n,days);
    double meals=calculatemeals(s,days);
    double services=service(m,days);
    total=room+meals+services;
    cout<<fixed<<setprecision(2);
    cout<<"Total cost of stay: Rs."<<total;
}
