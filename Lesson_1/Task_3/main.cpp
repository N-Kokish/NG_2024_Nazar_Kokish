#include <iostream>

using namespace std;

int main()
{
    int Salary;
    cout << "How much do you earn?" << endl;
    cin  >> Salary ;
    if (Salary < 1000){
        cout << "Work more!" << endl;
    }
    if (Salary > 999){
        if (Salary >999999){
            cout << "Yes, you are a millionaire!" << endl;
        }
        if (Salary<1000000){
            cout << "good job!" << endl;
        }
    }
    cout <<"Well done!";
    return 0;
}
