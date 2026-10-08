#include <iostream>
using namespace std;

int main(){

    //variable declaration
    string username;
    string password;
    

    //prompting username input in a loop until correct input
    do
    {
        cout << "Enter Username: " << endl;
        getline(cin, username);

    
        if (username != "kali")
        {
            cout << endl;
            cout << "Incorrect credentials, try again." << endl;
            cout << endl;

        }

        
    }    while (username != "kali");
    cout << endl;


    //prompting password input in a loop until correct input
    do
    {
         cout << "Enter Password: " << endl;
         getline(cin, password);

         if (password != "ferry234J")
         {
            cout << "Incorrect credentials, try again." << endl;

            cout << endl;
         }
         else 
        {
            cout << "Access Granted" << endl;
        }


    } while(password != "ferry234J");     
         


        

    

    return 0;
}