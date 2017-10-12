/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 19, 2017, 11:25 AM
 * Purpose: Payment
 */

//System Libraries Here
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int N; //Number of months 
    float i; // Percent interest rate per month 
    float L; //Loan in $
    float mp; //Monthly Payment in $
    float totPaid; //Total Payment
    float intPaid; //Interest Paid
    
    
    //Input or initialize values Here
    N=36;
    i=0.01;
    L=10000;
    
    //Process/Calculations Here
    float temp=pow(1+i,N);
    mp=i*temp*L/(temp-1);
    mp=static_cast<int>(mp*100)/100.0f;
    totPaid=mp*N;
    intPaid=totPaid-L;
    
    //Output Located Here
    cout<<"Number of Months = "<<N<<endl;
    cout<<"Interest Rate per Month = "<<i<<"%"<<endl;
    cout<<"Amount Loaned = $"<<L<<endl;
    cout<<"Monthly Payment = $"<<mp<<endl;
    cout<<"Total Amount Paid = $"<<totPaid<<endl;
    cout<<"Total Interest Paid = $"<<intPaid<<endl;

    //Exit
    return 0;
}

