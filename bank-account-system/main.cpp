#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    string acc_holder_name;
    int acc_number;
    double acc_balance;
public:
    BankAccount(string name, int number, double balance){
        cout << "Account successfully created" << endl;

        acc_holder_name = name;
        acc_number = number;
        acc_balance = balance;
    }    

    void displayAccount(){
        cout << "==========================" << endl;
        cout << "Account holder name:  " << acc_holder_name << endl;
        cout << "Account number:  " << acc_number << endl;
        cout << "Account balance:  " << acc_balance << endl;
        cout << "==========================" << endl;

    }
    ~BankAccount(){
        cout << "Account closed successfully" << endl;
    }
};


int main(){
    BankAccount bank1("Susan Ngigi", 321003, 32000);
    bank1.displayAccount();
    
    return 0;
}