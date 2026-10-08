#include <iostream>
using namespace std;

int main(){

    

    //variable declaration

    for (int i = 1; i <= 5; i++) {

    string employee_name;
    float basic_salary, bonus, total_salary;

    cout << "Enter your name: " << endl;
    getline (cin, employee_name);

    cout << "Enter basic salary: " <<endl;
    cin >> basic_salary;
    cin.ignore();      // removes leftover newline

    bonus = (0.05 * basic_salary);

    total_salary = (basic_salary + bonus);

    cout << endl;

    // display
    cout << "=========================" << endl;
    cout << "EMPLOYEE BONUS REPORT" << endl;
    cout << "=========================" << endl;
    cout << "Employee name: " << employee_name << endl;
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Total Salary: " << total_salary << endl;
    cout << "=========================" << endl;
    cout << endl;

    }
   
   

}