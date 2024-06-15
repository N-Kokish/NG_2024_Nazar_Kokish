#include <iostream>

using namespace std;

int main()
{
    int lich=1 ;
    char str[256];
    cout << "Enter some string: ";
    cin.getline(str, 256);
    int char_=0;
    while (str[char_] != 0) {
        if (str[char_] == ' '){
            lich=lich+1;
            }
        char_++;
    }
    cout <<lich<< endl;
    return 0;
}
