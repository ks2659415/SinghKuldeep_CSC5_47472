/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 9:00 PM
 * Purpose: Automobile Costs
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float loanPayment, insurance, gas, oil, tires, maintenance;
    float monthlyTotal, annualTotal;
    
    //Input or initialize values Here
    cout << "Enter your monthly loan payment: ";
    cin >> loanPayment;
    cout << "Enter your monthly insurance: ";
    cin >> insurance;
    cout << "Enter your monthly gas expense: ";
    cin >> gas;
    cout << "Enter your monthly oil expenses: ";
    cin >> oil;
    cout << "Enter your monthly tires expenses: ";
    cin >> tires;
    cout << "Enter your monthly maintenance expenses: ";
    cin >> maintenance;
    
    //Process/Calculations Here
    monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
    annualTotal = monthlyTotal * 12;
    
    //Output Located Here
    cout << setprecision(2) << fixed;
    cout << "Your total monthly expenses are: $" << monthlyTotal << endl;
    cout << "Your total  annual expenses are: $" << annualTotal << endl << endl;

    //Exit
    return 0;
}

