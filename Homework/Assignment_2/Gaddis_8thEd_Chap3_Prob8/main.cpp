/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 7:25 PM
 * Purpose: How Many Widgets?
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
    float widWeight ; // Weight of each widget in pounds
    float pEmpty;//Empty Pallet
    float pWeight; //Pallet Weight 
    float widNum; //Widget Number
    
    //Input or initialize values Here
    widWeight=12.5;
    cout<<"How much does the empty pallet weigh (pounds): ";
    cin>>pEmpty;
    cout<<"How much does the pallet weigh (with widgets): ";
    cin>>pWeight;
    
    //Process/Calculations Here
    widNum=(pWeight-pEmpty)/12.5;  
    
    //Output Located Here
    cout<<"There are: "<<widNum<<" widgets on the pallet";

    //Exit
    return 0;
}

