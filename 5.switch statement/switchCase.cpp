/* Build a simple menu-driven program using a switch statement that takes 
an option and executes the corresponding code. */

#include<iostream>
using namespace std;
int main(){
    int choise;
    float a,b;
    cout<<"1.Addition\n2.subtraction\n3.multiplication\n4.division\nchoose one option 1-4: ";
    cin>>choise;
    cout<<"Entre two no: ";
    cin>>a>>b;
    switch(choise){
        case 1: cout<<a+b; break;
        case 2: cout<<a-b; break;
        case 3: cout<<a*b; break;
        case 4: cout<<a/b; break; 
    }
}