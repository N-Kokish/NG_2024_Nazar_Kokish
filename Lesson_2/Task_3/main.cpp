#include <iostream>

using namespace std;

int main()
{
    int maximum_numbers=0;
    int array_numbers[5];
    //int maximum_account_index;
    for(int number_index=0;number_index<5;number_index++){
        cout << "Enter amount in "<<number_index+1<<" row:  " ;
        cin >>array_numbers[number_index];
        if (maximum_numbers<array_numbers[number_index]){
            maximum_numbers =array_numbers[number_index];
            //maximum_account_index=number_index+1;
        }
    }
    for(int number_index=0;number_index<maximum_numbers;number_index++){
        for(int counter=0;counter<5;counter++){
            if (array_numbers[counter]>0){
                cout<<"*";
            }else{
                cout<<" ";
            }
            array_numbers[counter]=array_numbers[counter]-1;
        }
        cout<<endl;
    }


    return 0;
}
