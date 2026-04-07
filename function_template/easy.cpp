/*Write a C++ program using a function template to calculate the total revenue from N booking amounts stored in an array, and display the result up to two decimal places.
🔑 Key Points:
Input: Number of bookings (N) and booking amounts
Use: Function template
Output: Total sum with 2 decimal precision
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function template to calculate total
template <typename T>
T calculateTotal(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numBookings;
    cin >> numBookings;

    double amounts[10];  // max size as per constraint

    for (int i = 0; i < numBookings; i++) {
        cin >> amounts[i];
    }

    double total = calculateTotal(amounts, numBookings);

    cout << fixed << setprecision(2) << total;

    return 0;
}
/*
Write a C++ program to calculate a compatibility score between two profiles based on Age, Height, and Education, where each matching attribute adds 10 points.

🔑 Key Points:
Input: Two profiles (3 attributes each)
Compare corresponding attributes
Each match → +10 points
Output: Total compatibility score (max = 30)
*/
#include <iostream>
using namespace std;

int calculateCompatibilityScore(int profile1[], int profile2[]) {
    int score = 0;

    for (int i = 0; i < 3; i++) {
        if (profile1[i] == profile2[i]) {
            score += 10;
        }
    }

    return score;
}

int main() {
    int profile1[3]; 
    int profile2[3]; 

    cin >> profile1[0] >> profile1[1] >> profile1[2];
    cin >> profile2[0] >> profile2[1] >> profile2[2];

    int compatibilityScore = calculateCompatibilityScore(profile1, profile2);
    cout << "Compatibility Score: " << compatibilityScore;

    return 0;
}
