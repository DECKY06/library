#include <iostream>
using namespace std;

int main() {

  int num1,
    num2,
    choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose operation: (1) Add, (2) Subtract, (3) Multiply, (4) Divide: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Result: " << num1 + num2 << endl;
    } else if (choice == 2) {
        cout << "Result: " << num1 - num2 << endl;
    } else if (choice == 3) {
        cout << "Result: " << num1 * num2 << endl;
    } else if (choice == 4) {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}