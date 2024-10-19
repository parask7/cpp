/* Create a program that finds the maximum and minimum element in an array. */

#include<iostream>
using namespace std;

int main() {
    int arr[] = {45, 25, 158, 469, 23, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int maxno = arr[0];
    int minno = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxno) {
            maxno = arr[i]; // Update maxno if current element is larger
        }
        if(arr[i] < minno) {
            minno = arr[i]; // Update minno if current element is smaller
        }
    }

    cout << "Maximum number: " << maxno << endl;
    cout << "Minimum number: " << minno << endl;

    return 0;
}
