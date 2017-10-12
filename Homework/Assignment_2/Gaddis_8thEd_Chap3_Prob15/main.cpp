/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 8:30 PM
 * Purpose: Property Tax
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
    float value,tax,assessment; //Property value, property tax, and property assessment 
    
    //Input or initialize values Here
    cout<<"Enter the actual value of the property: ";
    cin>>value;
    
    //Process/Calculations Here
    assessment=value*0.60;  //60% of the property value
    tax=(assessment/100)*0.75;
    
    //Output Located Here
    cout<<setprecision(2)<<fixed;
    cout<<"The assessment value is: "<<assessment<< endl;
    cout<<"The property tax is: "<<tax<<endl;

    //Exit
    return 0;
}

