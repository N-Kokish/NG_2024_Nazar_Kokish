#include <iostream>
using namespace std;

int main()
{
    int number;
    int agreement;
    int money;
    int maximum_account=0;
    int minimum_account=0;
    int maximum_account_index=1;
    int minimum_account_index=1;
    double account[10];
     for (int number = 0; number < 10; number++) {
        account[number]=1000;
    }
    cout << "What is your account number?" << endl ;
    cin >>number;
    number=number-1;
    cout << number+1 <<" : " << account[number] << endl;
    cout << "Please enter 1 if you want to deposit money, or enter 0 if you want to withdraw money" << endl;
    cin >>agreement;
    cout <<"How much do you want to ";
    if (agreement ==1){
        cout <<"deposit?"<<endl;
        cin >> money;
        account[number]=account[number]+money;
    }else{
        cout <<"withdraw?"<<endl;
        cin >> money;
        if (account[number]>=money){
            account[number]=account[number]-money;
        }else{
            cout<<"The requested amount is more than what is on the account!"<<endl;
        }
    }
    cout <<"Account "<< number+1 << " has "<< account[number]<<" dollars "<<endl;
    cout <<"If you want to know additional information, such as the amount of money on all \naccounts,the largest and smallest account, enter 1 :"<<endl;
    cin >>agreement;
    money=0;
    for (int number = 0; number < 10; number++) {
        money=money+account[number];
    }
    cout<<"Amount of money on all accounts : " << money <<endl;
    minimum_account = account[0];
    for (int number = 0; number < 10; number++) {
        if (maximum_account<account[number]){
            maximum_account =account[number];
            maximum_account_index=number+1;
        }
        if (minimum_account>account[number]){
            minimum_account=account[number];
            minimum_account_index=number+1;
            }
    }
    cout<<"The most money in the account is "<<maximum_account_index<<" : "<<maximum_account<<endl;
    cout<<"The least amount of money in the account is "<<minimum_account_index<<" : "<< minimum_account<<endl;
}
