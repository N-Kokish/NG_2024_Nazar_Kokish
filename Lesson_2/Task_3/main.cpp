#include <iostream>

using namespace std;

int main()
{
    int maximum_numbers=0;
    int array_numbers[5];
    \
    for(int number_index=0;number_index<5;number_index++){
        cout << "Enter amount in "<<number_index+1<<" row:  ";
        cin >>array_numbers[number_index];
        if (maximum_numbers<array_numbers[number_index]){
            maximum_numbers =array_numbers[number_index];
            //maximum_account_index=number_index+1;
        }
    }
    char figure[maximum_numbers][5];
    for(int i =0;i<maximum_numbers;i++){
        for(int j=0;j<5;j++){
            figure[i][j]='o';
        }
    }

    for(int j=0;j<5;j++){
        for(int i =0;i<array_numbers[j];i++){
            figure[i][j]='*';
            }
        }





    for(int i =0;i<maximum_numbers;i++){
        for(int j=0;j<5;j++){
            cout<<figure[i][j];
        }
        cout<<endl;
    }
    cout <<maximum_numbers;

    cout << "Hello World!" << endl;
    return 0;
}
