/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 6:00 PM
 * Purpose: Miles per Gallon 
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
    float gal; //The number of gallons of gas the car can hold
    float miles; //Number of miles the car can be driven
    float mpg; //Miles per gallon
    
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<"Enter the number of gallons per tank: ";
    cin>>gal;
    cout<<"Enter the number of miles per tank of gas: ";
    cin>>miles;
    mpg=miles/gal;
    cout<<"The car's MPG is: "<<mpg<<endl;

    //Exit
    return 0;
}

