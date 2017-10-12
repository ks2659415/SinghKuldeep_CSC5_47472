/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 7:25 PM
 * Purpose: Average Rainfall
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string mon1,mon2,mon3; //The months in which it rained
    float rain1,rain2,rain3; //3 individual rain falls 
    float avg; //the average amount of rainfall
    
    //Input or initialize values Here
    cout<<"Enter the name of the month: ";
    cin>>mon1;
    cout<<"Enter the rainfall (in inches): ";
    cin>>rain1;
    cout<<"Enter the name of the month: ";
    cin>>mon2;
    cout<<"Enter the rainfall (in inches): ";
    cin>>rain2;
    cout<<"Enter the name of the month: ";
    cin>>mon3;
    cout<<"Enter the rainfall (in inches): ";
    cin>>rain3;
    
    //Process/Calculations Here
    avg=(rain1+rain2+rain3)/3;   
    
    //Output Located Here
    cout<<setprecision(2)<<fixed;
    cout<<"The average rainfall for "<<mon1<<", "<<mon2<<", and "<<mon3<<" is: "<<avg<<endl;

    //Exit
    return 0;
}

