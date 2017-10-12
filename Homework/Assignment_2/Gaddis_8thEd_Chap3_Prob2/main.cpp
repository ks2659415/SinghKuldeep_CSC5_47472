/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 6:25 PM
 * Purpose: Stadium Seating 
 */

//System Libraries Here
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float A,B,C; //Ticket Classes
    float numA,numB,numC; //Number of tickets sold per class
    float soldA,soldB,soldC; //Number of tickets sold for each class
    float total; //Total tickets sold
    
    //Input or initialize values Here
    A=15; //in $
    B=12; //in $
    C=9; //in $
    
    cout<<"Class A Tickets sold = ";
    cin>>numA;
    cout<<"Class B Tickets sold = ";
    cin>>numB;
    cout<<"Class C Tickets sold = ";
    cin>>numC;
    
    //Process/Calculations Here
    soldA=numA*A;
    soldB=numB*B;
    soldC=numC*C;
    total=soldA+soldB+soldC;
           
    
    //Output Located Here
    cout<<setprecision(2) << fixed;
    cout<<"Sales from Class A = $"<<soldA<<endl;
    cout<<"Sales from Class B = $" <<soldB<<endl;
    cout<<"Sales from Class C = $" <<soldC<<endl;
    cout << "Total sales generated = $"<<total<<endl;


    //Exit
    return 0;
}

