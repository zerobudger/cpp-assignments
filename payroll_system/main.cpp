#include <iostream> //learning functions
using namespace std;
#include <iomanip>

void getEmployeeDetails(string &employee_name, float &basic_salary, float &overtime_hours)
{
    cout << "Enter your name: "<< endl;
    getline (cin, employee_name) ;
    cout << "Enter basic salary: "<< endl;
    cin >> basic_salary;
    cout << "Enter overtime hours: "<< endl;
    cin >> overtime_hours;
    cout << endl;
    
}

float calculateOvertimePay(float rate_per_hour, float overtime_hours)
{
    
    return overtime_hours * rate_per_hour;
}

float calculteNetSalary(float basic_salary, float overtime_pay)
{
    return basic_salary + overtime_pay;

}

void displayPayslip(string employee_name, float basic_salary, float overtime_hours, float overtime_pay, float net_salary)
{   
    cout << setfill('-') << setw(30) << "" << setfill(' ') << endl;
    cout << "PAY SLIP" << endl;
    cout << "Employee Name: " <<employee_name << endl;
    cout << "Basic Salary: " <<basic_salary << endl;
    cout << "Overtime Hours: "<<overtime_hours << endl;
    cout << "Overtime Pay: " << overtime_pay << endl;
    cout << "Net Salary: "<< net_salary << endl;
    cout << endl;
}

int main()
{
    string employee_name;
    float basic_salary, overtime_hours, overtime_pay, rate_per_hour, net_salary;
    rate_per_hour = 200;
     
 getEmployeeDetails(employee_name, basic_salary, overtime_hours);

overtime_pay = calculateOvertimePay( rate_per_hour, overtime_hours);

 net_salary = calculteNetSalary( basic_salary, overtime_pay);

 displayPayslip(employee_name, basic_salary, overtime_hours, overtime_pay, net_salary);

    return 0;
}