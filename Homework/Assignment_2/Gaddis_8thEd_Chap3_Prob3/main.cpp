/* 
 * File:   main.cpp
 * Author: Kuldeep Singh 
 * Created on September 26, 2017, 7:25 PM
 * Purpose: Test Average
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
    float s1,s2,s3,s4,s5; //5 individual test scores
    float avg; //Average test score
    
    
    //Input or initialize values Here
    cout<<"Enter score 1: ";
    cin>>s1;
    cout<<"Enter score 2: ";
    cin>>s2;
    cout << "Enter score 3: ";
    cin>>s3;
    cout<<"Enter score 4: ";
    cin>>s4;
    cout<<"Enter score 5: ";
    cin>>s5;
    
    //Process/Calculations Here
    avg=(s1+s2+s3+s4+s5)/5;     
    
    //Output Located Here
    cout<<setprecision(1)<<fixed;
    cout<<"The average score is: "<<avg<<endl;


    //Exit
    return 0;
}

