// implement a recursive function to calculate the factorial of a number. 

#include<iostream>
using namespace std;

int factorial(int a) {
    if(a>1){
        return a*factorial(a-1);
    }
}

int main(){
    int b;
    cout<<"Entre any value: ";
    cin>>b;
    cout<<factorial(b);
    
}