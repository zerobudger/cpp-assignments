#include <iostream>
using namespace std;

int main(){
    
    // variable declaration
    string student_name;
    float theory_test_marks;
    float practical_test_marks;
    float average_score;


    // prompting the user input

    cout << "Enter Student Name: " << endl;
    getline (cin, student_name);

    cout << "Enter Theory Test Marks: " << endl;
    cin >> theory_test_marks;

    cout << "Enter Practical Test Marks: " << endl;
    cin >> practical_test_marks;


    // average score calculation
    average_score = (theory_test_marks + practical_test_marks) / 2;
    
    cout<< endl;
   
    // display
    
    
    cout << "==============================" << endl;
    cout << "DRIVING SCHOOL RESULTS" << endl;
    cout << "==============================" << endl;
    cout << "Student Name: " << student_name << endl;
    cout << "Theory Test marks: " << theory_test_marks << endl;
    cout << "Practical Test marks: " << practical_test_marks << endl;
    cout << "Average Score: " << average_score << endl;
     if (average_score >= 50){
        cout << "PASS" << endl;
    }
    else {
        cout <<"FAIL" << endl;
    }
    
    cout << "==============================" << endl;


    return 0;
    

}