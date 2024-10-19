/*  Write a program that takes an integer, a floating-point number, and a character 
as input and prints them.*/

#include<iostream>
using namespace std;

int main() {
    int a;
    float b;
    char c;

    cout<<"entre any integer value: ";
    cin>>a;

    cout<<"entre any decimal value: ";
    cin>>b;

    cout<<"entre any character: ";
    cin>>c;

    cout<<"Integer value: "<<a<<"\ndecimal value: "<<b<<"\ncharacter: "<<c<<endl;

    return 0;
}