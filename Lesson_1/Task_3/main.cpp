#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "How much do you earn?" << endl;
    cin  >> a ;
    if (a < 1000){
        cout << "Work more!" << endl;
    }
    if (a > 1000){
        if (a >1000000){
            cout << "Yes, you are a millionaire!" << endl;
        }
        if (a<1000000){
            cout << "good job!" << endl;
        }
    }
    cout <<"Well done!";
    return 0;
}
