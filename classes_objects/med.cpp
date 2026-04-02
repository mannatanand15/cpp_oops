/*
Write a program that allows Ramanan to input temperatures in Fahrenheit and Celsius, 
convert them to the other scale and display the equivalent temperature of both temperatures. Use a class Temperature having the temperature as a public attribute.
Formulas:
Fahrenheit to Celsius = (F - 32) * 5/9

Celsius to Fahrenheit = (C * 9/5) + 32
Input format :
The first line of input consists of a float value representing the temperature in Fahrenheit F.
The second line consists of a float value representing the temperature in Celsius C.
*/
// You are using GCC
#include<iostream>
#include<iomanip>  //fixed decimal format
using namespace std;
class Temperature{
float cel;
float fah;
public:
    void celsius(float fah){
        float value;
        value=(fah-32)*5/9;
        cout<<fixed<<setprecision(2);
        cout<<value <<" degree celsius"<<endl;
    }
    void fahren(float cel){
        float val;
        val=(cel*9/5)+32;
        cout<<fixed<<setprecision(2);
        cout<<val<<" degree fahrenheit";
        
    }
};
int main(){
    float c,f;
    cin>>c>>f;
    Temperature temp;
    temp.celsius(c);
    temp.fahren(f);
}
