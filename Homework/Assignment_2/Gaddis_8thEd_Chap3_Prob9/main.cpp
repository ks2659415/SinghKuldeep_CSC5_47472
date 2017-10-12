/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 8:25 PM
 * Purpose: How Many Calories?
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
    float cookies; //Number of Cookies
    float cookCal; //Calories in one Cookie
    float totCal;//Total calories 
    
    //Input or initialize values Here
    cout<<"Enter the number of cookies you ate: ";
    cin>>cookies;
    
    //Process/Calculations Here
    cookCal=300/3;
    totCal=cookies*cookCal;  
    
    //Output Located Here
    cout<<"Total Calories consumed: "<<totCal;

    //Exit
    return 0;
}

