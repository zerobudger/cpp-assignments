#include <iostream>
using namespace std;

int main(){

    // variable declaration

    string student_name, admission_decision;
    int age;
    int exam_score;

    // prompting user input
    cout << "Enter Student Name: " << endl;
    getline(cin, student_name);

    cout << "Enter age: " << endl;
    cin >> age;

    cout << "Enter Exam Score: " << endl;
    cin >> exam_score;

    //using the nested if
    if(age >= 18)
    {
        if(exam_score >= 50){
            admission_decision = "Admitted";

        }
        else {
            admission_decision = "Not Admitted";
        }
    }
    else {
        admission_decision = "Not Admitted: Underage";

    }

    cout << endl;


    // display
    cout << "====================" << endl;
    cout << "ADMISSION DECISION" << endl;
    cout << "====================" << endl;
    cout << "Student Name: " << student_name <<endl;
    cout << "Age: " << age << endl;
    cout << "Exam Score: " << exam_score << endl;
    cout << "Admission Decision: " << admission_decision << endl;
    cout << "====================" << endl;

    return 0;

}