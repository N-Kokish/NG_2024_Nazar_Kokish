#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,D;
    cout << "Enter a, b, c according to the pattern to solve the quadratic equation:a*x^2+b*x+c=0"<<endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    D = pow(b, 2)-(4*a*c);
    if (D == 0) {
        cout <<"x = "<<(-b)/(2*a) <<endl;
    }
    if (D > 0){
        cout <<"x1 = "<<((-b +pow(D, 1.0/2))/(2*a))<<endl;
        cout <<"x2 = "<<((-b -pow(D, 1.0/2))/(2*a))<<endl;
    }
    if (D < 0){
        cout <<"x1 = "<<(-b)/(2*a) <<"+"<<pow(-D, 1.0/2)/(2*a)<<"*i"<<endl;
        cout <<"x2 = "<<(-b)/(2*a) <<"-"<<pow(-D, 1.0/2)/(2*a)<<"*i"<<endl;
    }




    return 0;
}
