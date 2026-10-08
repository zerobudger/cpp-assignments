#include <iostream>
using namespace std;

int main(){

    //variable declaration
    double num1, num2;
    char operation;
    double result;
    

    //prompting user input
    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter operator(+, -, *, /): " << endl;
    cin >> operation;

    cout << endl;

    //switch operation
    switch(operation)
    {
        case '+':  //addition
        result = num1 + num2;
         
            cout <<"=====================" << endl;
            cout << "Result: " << result << endl;
            cout <<"=====================" << endl;
        break;

       
       
        case '-':   //subtraction
        result = num1 - num2;
            
            cout <<"=====================" << endl;
            cout << "Result: " << result << endl;
            cout <<"======================" << endl;
        break;

       
       
        case '*':    //multiplication
        result = num1 * num2;
         
            cout <<"=====================" << endl;
            cout << "Result: " << result << endl;
            cout <<"=====================" << endl;
        break;

        case '/':   //division

        if (num2 == 0){
            cout <<"=====================" << endl;
            cout << "Cannot divide by 0." << endl;
            cout <<"=====================" << endl;
        }
        else {
            
        result = num1 / num2;
         
            cout <<"=====================" << endl;
            cout << "Result: " << result << endl;
            cout <<"=====================" << endl;
        }
        break;

    }
    cout << endl;
   


    return 0;

    
}