/*
Design a program to merge and sort item IDs using vectors.

Input:
Integer n (size of first list)
n integers (first list)
Integer m (size of second list)
m integers (second list)
Task:
Store both lists using vectors
Merge the two lists
Sort in ascending order
Output:
Print merged and sorted elements in one line
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    // Merge
    vector<int> merged;
    merged.insert(merged.end(), v1.begin(), v1.end());
    merged.insert(merged.end(), v2.begin(), v2.end());

    // Sort
    sort(merged.begin(), merged.end());

    // Output
    for (int i = 0; i < merged.size(); i++)
        cout << merged[i] << " ";

    return 0;
}
/*
Design a program using a list container to remove all occurrences of a target element.

Input:
Integer N (size of list)
N integers (list elements)
Integer target
Task:
Store elements in a list
Remove all occurrences of target
If not found → print original list
Output:
Print remaining elements (space-separated)
*/
#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    list<int> l;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        l.push_back(val);
    }

    cin >> x;

    // Remove all occurrences
    l.remove(x);

    // Print result
    for (int val : l)
        cout << val << " ";

    return 0;
}
