/*  Project Name: Simple Calculator
    Features:
    - Menu-based (user selects operation)
    - Use switch statement
    - Add, subtract, multiply, divide
*/

#include<iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter first number, operator (+ - * /) and second number: ";
    cin >> num1 >> op >> num2;

    switch(op) {
        case '+': cout << "Result: " << num1 + num2; break;
        case '-': cout << "Result: " << num1 - num2; break;
        case '*': cout << "Result: " << num1 * num2; break;
        case '/': cout << "Result: " << num1 / num2; break;
        default: cout << "Invalid operator!";
    }
    return 0;
}

/*  Output:
    Enter first number, operator (+ - * /) and second number: 4 * 5
    Result: 20
*/