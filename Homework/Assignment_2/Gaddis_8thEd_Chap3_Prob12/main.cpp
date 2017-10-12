/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 8:00 PM
 * Purpose: Celsius to Fahrenheit 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float C; //Celsius
    float F; //Fahrenheit 
    
    //Input or initialize values Here
    cout<<"Enter Celsius temperature: ";
    cin>>C;
    
    //Process/Calculations Here
    F=(1.8*C)+32;
    
    //Output Located Here
    cout<<C<<" degrees Celsius = "<<F<<" degrees Fahrenheit";

    //Exit
    return 0;
}

