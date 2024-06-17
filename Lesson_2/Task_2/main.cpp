#include <iostream>

using namespace std;

int main()
{
    int maximum_numbers=0;
    int array_numbers[20];
    cout << "You are now setting up your \"unique\" shape, now you will keep the size of each floor shape,\n in order to complete the entered data, enter 0."<<endl;
    for(int number_index=0;number_index<20;number_index++){
        cout << "Enter the size of the floor number "<<number_index+1<<" : ";
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
