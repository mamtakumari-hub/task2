#include <iostream>
using namespace std;
int main() {
    char operation;
    float num1, num2, result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result;
            } else {
                cout << "Error! Division by zero.";
            }
            break;
        default:
            cout << "Invalid operation!";
    }

    return 0;
}