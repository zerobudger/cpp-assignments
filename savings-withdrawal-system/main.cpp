#include <iostream>
using namespace std;

int main(){

    // variable declaration
    float account_balance;
    float withdrawal_amount;


    cout << "Enter account balance: " << endl;
    cin >> account_balance;

     cout << "Enter withdrawal amount: " << endl;
      cin >> withdrawal_amount;


    while (account_balance > 0 && withdrawal_amount <= account_balance)
    {

           account_balance = (account_balance - withdrawal_amount);

           
           //display remaining balance
            cout << "Account balance: " << account_balance << endl;

           cout << "Enter withdrawal amount: " << endl;
           cin >> withdrawal_amount;


    }
  
}