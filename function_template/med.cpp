/*
Design a program for Audi test drive booking.

Input:
Integer N (number of slots, up to 
10
5
10
5
)
Next N lines: date (YYYY-MM-DD) and availability (0/1)
One preferred date
Task:
Check if the preferred date exists and is available (1).
If yes → book the slot and display success message.
Else → display slot not available.
Output:
"Test Drive Booked Successfully on {date}"
OR
"Test Drive Slot not available on {date}"
  */
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<string, int> slots;

    // Input slots
    for (int i = 0; i < N; i++) {
        string date;
        int available;
        cin >> date >> available;
        slots[date] = available;
    }

    // Preferred date input
    string preferredDate;
    cin >> preferredDate;

    // Check availability
    if (slots.find(preferredDate) != slots.end() && slots[preferredDate] == 1) {
        cout << "Test Drive Booked Successfully on " << preferredDate;
        slots[preferredDate] = 0; // mark as booked
    } else {
        cout << "Test Drive Slot not available on " << preferredDate;
    }

    return 0;
}
