/* Write a program to determine if a number is even or odd. */

#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Entre any integer: ";
    cin>>a;

    // short-hand if else.
    string result = (a%2==0)? "Even No.": "Odd No.";
    cout<<result;

    // normal if else.

    if(a%2 == 0){
        cout<<"Even No.";
    } else{
        cout<<"Odd No.";
    }

    return 0;
}