#include <iostream>

using namespace std;

int main()
{
    int f=0,i=1,j=0,u=1;
    cout << "Please measure the Christmas tree you want: ";
    cin >> f;

    while (i<=f){
        for (j = 0; j < f-i; ++j){
            cout << " ";
        }
        cout << "*";
        for(u = 1; u < i; ++u){
            cout << "**";
        }
        cout<<endl;
        i=i+1;
    }
    for (j = 0; j < f-1; ++j){
        cout << " ";
    }
    cout << "*";
    return 0;
}
