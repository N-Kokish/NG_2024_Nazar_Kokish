#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char mathematical_operation;
    double a,b;
    cout << "lead 2 numbers: " << endl;
    cout << "a:";
    cin  >> a ;
    cout << "b:";
    cin >> b ;
    cout << "Choose the action you want to do with them (+,-,*,/,^,r(v):" << endl;
    cout << "mathematical operation: ";
    cin >> mathematical_operation;
    switch (mathematical_operation) {
    case '+':
        cout << a << " + " << b << " = " << a+b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a-b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a*b << endl;
        break;
    case '/':
        if (b!=0){
            cout << a << " / " << b << " = " << a/b << endl;
        }else{
            cout << "You cannot divide by 0!!!!";
        }
        break;
    case '^':
        cout << a  <<  "^" << b <<" = " << pow(a,  b) << endl;
        cout << b  <<  "^" << a <<" = " << pow(b,  a) << endl;
        break;
    case 'r':
        cout << "v" << a  << " = " << pow(a, 1.0 / 2) << endl;
        cout << "v" << b  << " = " << pow(b, 1.0 / 2) << endl;
        break;
    default:
        cout << "You performed a mathematical operation incorrectly.( Please enter next time: +,-,*,/,^,r(v) )" << endl;
        break;
    }
    return 0;
}
