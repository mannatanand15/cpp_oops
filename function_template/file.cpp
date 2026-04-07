/*
Design a program to manage webpage URLs and their indexing status using function templates and dynamic arrays.

Input:
Integer N (number of URLs, 
1
≤
𝑁
≤
20
1≤N≤20)
Next N lines: URL (string) and status (0/1)
Task:
Store URLs and their indexing status dynamically
Display each URL with:
"Indexed successfully" if status = 1
"Indexing failed" if status = 0
Output:
[URL]: Indexed successfully
OR
[URL]: Indexing failed
*/
#include <iostream>
using namespace std;

// Function template to display URLs and status
template <typename T, typename U>
void display(T urls[], U status[], int n) {
    for (int i = 0; i < n; i++) {
        cout << urls[i] << ": ";
        if (status[i] == 1)
            cout << "Indexed successfully";
        else
            cout << "Indexing failed";

        if (i != n - 1) cout << endl; // no extra newline
    }
}

int main() {
    int n;
    cin >> n;

    string* urls = new string[n];   // dynamic array
    int* status = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> urls[i] >> status[i];
    }

    display(urls, status, n);

    delete[] urls;
    delete[] status;

    return 0;
}
