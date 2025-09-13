#include <iostream>
#include <limits> // for numeric_limits
using namespace std;

double calculate(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b != 0) return a / b;
            else {
                cout << "Error: Division by zero not allowed!" << endl;
                return 0; // return neutral value
            }
        default:
            cout << "Error: Invalid operator!" << endl;
            return 0;
    }
}

int main() {
    bool running = true;

    while (running) {
        cout <<"\n"<< "\n--------------------------------------------------\n"<<"\n";
        char choice;
        cout << "Do you want to use the calculator? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            double num1, num2;
            char op;

            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter operator (+, -, *, /): ";
            cin >> op;

            cout << "Enter second number: ";
            cin >> num2;

            double result = calculate(num1, num2, op);
            cout << "Result = " << result << endl;
        }
        else if (choice == 'n' || choice == 'N') {
            cout << "Exiting calculator. Goodbye!" << endl;
            running = false;
        }
        else {
            cout << "Invalid input! Please enter y or n." << endl;
        }
    }

    // Pause before exit
    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover input
    cin.get(); // wait for Enter

    return 0;
}

