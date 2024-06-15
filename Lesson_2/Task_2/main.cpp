#include <iostream>

using namespace std;

int main()
{
    int maximum_numbers=0;
    int array_numbers[20];
    for(int number_index=0;number_index<20;number_index++){
        cout << "Enter value: ";
        cin >>array_numbers[number_index];
        if (maximum_numbers<array_numbers[number_index]){
            maximum_numbers =array_numbers[number_index] ;
            //maximum_account_index=number_index+1;
        }
        if (array_numbers[number_index]==0){
            break;
        }

    }
    for (int numeric : array_numbers) {
        if (numeric==0){
            break;
        }
        for (int space=0;space<(maximum_numbers-numeric)/2;space++){
            cout<<" ";
        }
        for (int asterisks=0;asterisks<numeric;asterisks++){
            cout<<"*";
        }
        cout <<   endl;
    }
    return 0;
}
