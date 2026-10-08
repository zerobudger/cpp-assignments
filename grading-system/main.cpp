# include <iostream> 
using namespace std;

int main(){
  
    string student_name;
    float exam_marks;
    string grade;

    

    cout << "Enter Student Name: " << endl;
    getline (cin, student_name);

   
    
    do{
         cout << "Enter Exam Marks: " << endl;
    cin >> exam_marks;

    if (exam_marks > 100 || exam_marks < 0)
    {
        cout << "Invalid marks. Enter marks between 0 and 100" << endl;
        cout << endl;
    }
     } while (exam_marks < 0 || exam_marks > 100);


    if (exam_marks >= 70 )
    {
        grade = "A" ;
        cout << grade;
        cout << endl;

    }

    else if(exam_marks >=60 )
    {
       grade = "B" ;
       cout << grade;
       cout << endl;
    }
    
   else if(exam_marks >= 50)
{
    grade = "C" ;
    cout << grade;
    cout << endl;
}

   else if(exam_marks >= 40)
   {
    grade = "D" ;
    cout << grade;
    cout << endl;
   }

   else
   {
    cout << "E" << endl;
    cout << endl;
   }
   
   cout << endl;
   cout << "====================" << endl;
   cout << "GRADE RESULTS" << endl;
   cout << "Student Name: " << student_name << endl;
   cout << "Marks: " << exam_marks << endl;
   cout << "Grade: " << grade << endl;
   cout << "=====================" << endl;
   

 return 0;

}