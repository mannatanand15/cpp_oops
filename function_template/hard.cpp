/*
Design a program for AV's Construction Company to manage material inventory using function templates.

Input:
Integer n (number of materials, 
1
≤
𝑛
≤
10
1≤n≤10)
Next n lines: material name (string) and quantity (int)
One line: material name and updated quantity
Task:
Add materials to inventory with messages
Update quantity if material exists
If not found → display error message
Display final inventory status
Output:
Show add/update messages
Display all materials with quantities
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

template <typename T>
void addMaterial(map<string, T> &inventory, vector<string> &order, string name, T quantity) {
    if (inventory.find(name) == inventory.end()) {
        order.push_back(name);
    }
    inventory[name] = quantity;
    cout << "Added " << quantity << " units of " << name << " to the inventory.\n";
}

template <typename T>
void updateMaterial(map<string, T> &inventory, string name, T quantity) {
    if (inventory.find(name) != inventory.end()) {
        inventory[name] = quantity;
        cout << "Updated " << name << " quantity to " << quantity << " units in the inventory.\n";
    } else {
        cout << "Material " << name << " not found in the inventory.\n";
    }
}

template <typename T>
void displayInventory(map<string, T> &inventory, vector<string> &order) {
    cout << "Current Inventory Status:\n";
    for (int i = 0; i < order.size(); i++) {
        cout << order[i] << ": " << inventory[order[i]] << " units";
        if (i != order.size() - 1) cout << "\n"; // 🚨 no extra newline at end
    }
}

int main() {
    int n;
    cin >> n;

    map<string, int> inventory;
    vector<string> order;

    for (int i = 0; i < n; i++) {
        string name;
        int quantity;
        cin >> name >> quantity;
        addMaterial(inventory, order, name, quantity);
    }

    string name;
    int quantity;
    cin >> name >> quantity;
    updateMaterial(inventory, name, quantity);

    displayInventory(inventory, order);

    return 0;
}
