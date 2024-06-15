#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char mathematical_operation;
    double number_1,number_2;
    cout << "lead 2 numbers: " << endl;
    cout << "the first number :";
    cin  >> number_1 ;
    cout << "the second number:";
    cin >> number_2 ;
    cout << "Choose the action you want to do with them (+,-,*,/,^,r(v):" << endl;
    cout << "mathematical operation: ";
    cin >> mathematical_operation;
    switch (mathematical_operation) {
    case '+':
        cout << number_1 << " + " << number_2 << " = " << number_1+number_2 << endl;
        break;
    case '-':
        cout << number_1 << " - " << number_2 << " = " << number_1-number_2 << endl;
        break;
    case '*':
        cout << number_1 << " * " << number_2 << " = " << number_1*number_2 << endl;
        break;
    case '/':
        if (number_2!=0){
            cout << number_1 << " / " << number_2 << " = " << number_1/number_2 << endl;
        }else{
            cout << "You cannot divide by 0!!!!";
        }
        break;
    case '^':
        cout << number_1  <<  "^" << number_2 <<" = " << pow(number_1,  number_2) << endl;
        cout << number_2  <<  "^" << number_1 <<" = " << pow(number_2,  number_1) << endl;
        break;
    case 'r':
        cout << "v" << number_1  << " = " << pow(number_1, 1.0 / 2) << endl;
        cout << "v" << number_2  << " = " << pow(number_2, 1.0 / 2) << endl;
        break;
    default:
        cout << "You performed a mathematical operation incorrectly.( Please enter next time: +,-,*,/,^,r(v) )" << endl;
        break;
    }
    return 0;
}
