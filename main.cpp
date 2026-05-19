#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout << "=== ПРОСТОЙ КАЛЬКУЛЯТОР ===\n";
    cout << "Введите первый число: ";
    cin >> num1;
    
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    
    cout << "Введите второе число: ";
    cin >> num2;
    
    cout << "\nРезультат: ";
    
    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
            }
            break;
        default:
            cout << "Ошибка: неверная операция!" << endl;
        cout << "Wasap" << endl;
    }
    
    return 0;
}
