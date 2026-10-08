#include <iostream>
using namespace std;


//1st function getting customer details
void getCustomerDetails(string& customer_name, float& units_consumed){
    cout << "Enter your name: " << endl;
    getline(cin, customer_name);

    cout << "Enter number of units consumed: " << endl;
    cin >> units_consumed;

}


//2nd function compuutes water bill
float calculateBill(float rate_per_unit, float units_consumed){
    return units_consumed * rate_per_unit;
}


//3rd function- reduces bill by 10%
float applyDiscount(float units_consumed, float water_bill, float final_pay){
    if (units_consumed > 100)
    {
      final_pay = (water_bill * 0.90);
    }
    else 
    {
        final_pay = water_bill;
    }
    return final_pay;

    cout << endl;
}

   

//4th function- display
void displayBill(string customer_name, float units_consumed, float water_bill, float discount, float final_pay){
    cout << "==============================" << endl;
    cout << "WATER BILL" << endl;
    cout << "==============================" << endl;
    cout << "Customer Name: " << customer_name << endl;
    cout << "Units Consumed: " << units_consumed << endl;
    cout << "Total Bill before discount: " << water_bill << endl;
    cout << "Final Payment: " << final_pay << endl;
    cout << "==============================" << endl;
}



int main(){

    //variable declaration
    string customer_name;
    float units_consumed, rate_per_unit, water_bill, discount, final_pay;
    rate_per_unit = 50;

    //calling the functions
    getCustomerDetails(customer_name, units_consumed);

    water_bill = calculateBill(rate_per_unit, units_consumed);

    final_pay = applyDiscount(units_consumed, water_bill, final_pay);

    displayBill(customer_name, units_consumed, water_bill, discount, final_pay);

    return 0;
}
