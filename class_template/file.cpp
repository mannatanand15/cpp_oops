/*
Write a C++ program using a class template Array to find the largest and second largest unique elements from two arrays:

One integer array
One floating-point array
Requirements:
Input:
Integer n (2 ≤ n ≤ 10)
n integers
n floating-point numbers
Output:
First line → largest and second largest from integer array
Second line → largest and second largest from float array
Both values must be unique (second largest ≠ largest)
Use template class for implementation
*/
#include <iostream>
using namespace std;

template <class T>
class Array {
public:
    Array(T arr[], int n) {
        T first = arr[0];
        T second;
        bool foundSecond = false;

        // Find largest element
        for (int i = 1; i < n; i++) {
            if (arr[i] > first) {
                first = arr[i];
            }
        }

        // Find second largest unique element
        for (int i = 0; i < n; i++) {
            if (arr[i] != first) {
                if (!foundSecond || arr[i] > second) {
                    second = arr[i];
                    foundSecond = true;
                }
            }
        }

        // Output result
        if (foundSecond)
            cout << first << " " << second;
        else
            cout << first << " " << first; // when all elements same
    }
};

int main() {
	
	int n;
	cin >> n;

	int ar[n];
	float br[n];

	for(int i = 0; i < n; i++){
	    cin >> ar[i];
	}

	for(int i = 0; i < n; i++){
	    cin >> br[i];
	}
	
	Array<int> a(ar, n);
	cout << "\n";
	Array<float> b(br, n);
	
	return 0;
}
