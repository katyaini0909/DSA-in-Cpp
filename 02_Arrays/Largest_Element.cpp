/*
Problem: Largest Element in an Array
Platform: Striver A2Z DSA Sheet
Topic: Arrays
Language: C++

Time Complexity: O(n)
Space Complexity: O(1)

Author: Katyaini Sharma
Date: 02 July 2026
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;

    return 0;
}
