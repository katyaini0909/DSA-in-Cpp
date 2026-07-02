/*
Problem: Conditional Statements
Platform: HackerRank
Topic: Basics
Language: C++

Time Complexity: O(1)
Space Complexity: O(1)

Author: Katyaini Sharma
Date: 02 July 2026
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1)
        cout << "one";
    else if (n == 2)
        cout << "two";
    else if (n == 3)
        cout << "three";
    else if (n == 4)
        cout << "four";
    else if (n == 5)
        cout << "five";
    else if (n == 6)
        cout << "six";
    else if (n == 7)
        cout << "seven";
    else if (n == 8)
        cout << "eight";
    else if (n == 9)
        cout << "nine";
    else
        cout << "Greater than 9";

    return 0;
}
