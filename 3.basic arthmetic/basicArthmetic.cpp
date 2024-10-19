/* Create a calculator program that adds, subtracts, multiplies, and divides 
two numbers.*/

#include<iostream>
using namespace std;
int main(){
    float a, b;

    cout<<"Entre any two integer value: ";
    cin>>a>>b;

    cout<<"Addition: "<<a+b<<"\nSubtraction: "<<a-b<<"\nMultiplication: "<<a*b<<"\nDivision: "<<a/b;

    return 0;
}