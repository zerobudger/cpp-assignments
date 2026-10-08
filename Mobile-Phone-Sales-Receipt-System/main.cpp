#include <iostream>
using namespace std;

int main(){

     // declared variables
    string customer_name;    
    string phone_model;
    int quantity;
    float phone_price;
    float total_sales_amount;

    cout << "Enter Customer Name: " << endl;
    getline (cin, customer_name);            // ensures user output of two names or more

    cout << "Phone model purchased: " << endl;
    getline(cin, phone_model);

    cout << "Quantity bought: "<< endl;
    cin >> quantity;

    cout << "Price per phone: "<< endl;
    cin >> phone_price;

    // calculation
    total_sales_amount = (quantity * phone_price);
    cout << endl;


  //DISPLAY
    cout << "==============================" << endl;
    cout << "MOBILE PHONE SALES RECEIPT" << endl;
    cout << "==============================" << endl;
    cout << endl;
    cout << "Customer Name: " << customer_name << endl;
    cout << "Phone Model: " << phone_model << endl;
    cout << "Quantity Bought: "<< quantity << endl;
    cout << "Price per phone: " << phone_price << endl;
    cout << endl;
    cout << "==============================" << endl;
    cout << " TOTAL SALES AMOUNT: "  << total_sales_amount << endl;
    cout << "==============================" << endl;

    return 0;

}