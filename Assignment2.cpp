#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b;
    char operation;
    
    std::cout << "Enter the two numbers: ";  //entering two numbers
    std::cin >> a >> b;
    
    std::cout << "Choose the operation (+, -, *, /): ";  //choosing the operator
    std::cin >> operation;
    
    // Calculation part
    switch(operation){
        case '+':
        std::cout << a << " + " << b << " = " << a + b << endl;
        break;
        case '-':
        std::cout << a << " - " << b << " = " << a - b << endl;
        break;
        case '*':
        std::cout << a << " * " << b << " = " << a * b << endl;
        break;
        case '/':
            if (b != 0) {
                std::cout << a << " / " << b << " = " << a / b << endl;
            } else {
                std::cout << "Error: Division by zero is undesirable." << endl;
            }
            break;
        default:
        std::cout << "Sorry, Invalid operator" << endl;
        }
        return 0;
}
