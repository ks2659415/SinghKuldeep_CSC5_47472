/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 17, 4:05 PM
 * Purpose:  Stock Commission 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short nShrs;    //Number of shares of stock
    float ppShr,fee;    //Price per share in $/share and fee a 
    float shrCost,comPaid,totPaid;  //Share cost in $'s, total paid in $'s
    
 
    //Input or initialize values Here
    nShrs=750;
    ppShr=35;
    fee=2;
    
    //Process/Calculations Here
    shrCost=nShrs*ppShr;
    comPaid=shrCost*fee/100;
    totPaid=shrCost+comPaid;
    
    //Output Located Here
    cout<<"Number of shares = "<<nShrs<<endl;
    cout<<"Share price =$"<<ppShr<<"/share"<<endl;
    cout<<"Commission fee ="<<fee<<"%"<<endl;
    cout<<"Cost of shares =$"<<shrCost<<endl;
    cout<<"Commission paid =$"<<comPaid<<endl;
    cout<<"total amount paid =$"<<totPaid<<endl;

    //Exit
    return 0;
}

