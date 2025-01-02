#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Helper function to calculate the sum of the squares of the digits of a number
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is happy
bool isHappy(int n) {
    unordered_set<int> seen; // To detect cycles

    while (n != 1) {
        if (seen.count(n)) {
            return false; // Cycle detected
        }
        seen.insert(n);
        n = sumOfSquares(n);
    }
    return true; // Reached 1
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isHappy(n)) {
        cout << n << " is a happy number!" << endl;
    } else {
        cout << n << " is not a happy number." << endl;
    }

    return 0;
}
