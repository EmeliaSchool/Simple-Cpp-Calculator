#include <iostream>

using namespace std;

int main()
{
    int num1, num2, sum, difference, product, dividend, remainder;
    char operation;
    string opselect;
    string pin;
    string pin2;
    string complete;
    // introduction + operation selection
    opselect = "Hello there! Please select the operation you wish to perform.\n available operations are as follows:\n addition (a), subtraction (s), multiplication (m), and division (d).\n Please select an operation by typing the corresponding letter and hitting the Enter key.";
    // first number to go in for operation (pin stands for "please insert number")
    pin = "Alright, now please insert a number.\n";
    // second number to go in for operation
    pin2 = "Fantastic! Now, please do insert a second number.\n";
    // completion, each having a prefix to determine which operation they go with
    string acomplete = "Wonderful, thank you. The sum of your two numbers is \n";
    string scomplete = "Wonderful, thank you. The difference of your two numbers is \n";
    string mcomplete = "Wonderful, thank you. The product of your two numbers is \n";
    string dcomplete = "Wonderful, thank you. The dividend of your two numbers is \n";
    // selecting operation
    cout << opselect;
    cin >> operation;
    // inserting numbers, then performing calculation
    cout << pin;
    cin >> num1;
    cout << pin2;
    cin >> num2;

    if (operation == 'a') {
        sum = num1 + num2;

        cout << acomplete << sum;
}

    if (operation == 's') {
        difference = num1 - num2;

        cout << scomplete << difference;
    }

    if (operation == 'm') {
        product = num1 * num2;

        cout << mcomplete << product;
    }

    if (operation == 'd') {
        dividend = num1 / num2;
        remainder = num1 % num2;

        cout << dcomplete << dividend << ", And the remainder is " << remainder;
    }

    return 0;
}
