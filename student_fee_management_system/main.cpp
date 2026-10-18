#include <iostream>
#include <string>
using namespace std;

class Student{
private:    
    string student_name;
    string admission_number;
    double fee_balance;
    
public:
    void inputStudent(){
        cout << "Enter your name:  "<< endl;
        getline(cin, student_name);

        cout << "Admission number: " << endl;
        cin >> admission_number;

        cout << "Fee balance:  " << endl;
        cin >> fee_balance;

        cout << endl;
    }

    void makePayment(){
        double paid_fees;
       
        do
        {
            cout << "How much do you want to pay?    " << endl;
            cin >> paid_fees;
            cout << endl;

            if (paid_fees <= 0)
            {
                cout << "================================================================" << endl;
                cout << "Cannot make void payment! Cannot proceed with payment." << endl;
                cout << "================================================================" << endl;
            }
           else if (paid_fees > fee_balance)
           {
               cout << "===============================================" << endl;
               cout << "Fees exceeded. Cannot proceed with payment." << endl;
               cout << "===============================================" << endl;
           }
           
           
        } while (paid_fees <= 0 || paid_fees > fee_balance);

        fee_balance -= paid_fees;
    }

    void displayStatus(){

        cout << "=========================" << endl;
        cout << "FEE STATEMENT" << endl;
        cout << "=========================" << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Admission Number: " << admission_number << endl;
        cout << "Fee Balance: " << fee_balance << endl;
        cout << "=========================" << endl;
    }



};


int main(){

    Student student_1;

    student_1.inputStudent();
    student_1.makePayment();
    student_1.displayStatus();

    return 0;
}