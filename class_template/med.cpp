/*Write a C++ program to identify composite numbers from a list of integers using the STL function remove_copy_if.

The program should:

Read an integer n (1 ≤ n ≤ 15)
Read n space-separated integers
Filter out prime numbers and display only composite numbers
📌 Conditions:
If n is outside the range (1 to 15), print -1
If no composite numbers are found, print -1
Otherwise, print:
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    // Check range of n
    if (n < 1 || n > 15) {
        cout << -1;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> composite;

    // Copy elements that are NOT prime (i.e., composite or 1)
    remove_copy_if(arr.begin(), arr.end(), back_inserter(composite), [](int x) {
        // Remove primes and 1
        if (x <= 1) return true;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)
                return false; // composite → keep
        }
        return true; // prime → remove
    });

    // If no composite numbers
    if (composite.empty()) {
        cout << -1;
        return 0;
    }

    // Print result
    cout << "Composite numbers: ";
    for (int num : composite) {
        cout << num << " ";
    }

    return 0;
}
