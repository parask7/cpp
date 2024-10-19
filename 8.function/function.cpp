/*  Write a function that checks if a number is prime. */
#include<iostream>
using namespace std;

void primeNo() {
    int n, cnt = 0;  // Initialize cnt to 0

    cout << "Enter any number: ";
    cin >> n;

    if (n <= 1) {
        cout << "It is not a prime number.";
        return;
    }

    // Loop to check divisors
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cnt++;
            break;  // No need to continue once we find a divisor
        }
    }

    if (cnt == 0) {
        cout << "It is a prime number.";
    } else {
        cout << "It is not a prime number.";
    }
}

int main() {
    primeNo();
    return 0;
}
