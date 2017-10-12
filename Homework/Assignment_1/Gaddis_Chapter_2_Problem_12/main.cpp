/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 17, 2017, 3:52 PM
 * Purpose:  Land Calculation Acres/miles^2
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVFTM=1.0/5280/5280; //Conversion from ft^2 to miles^2
const float CNVFTA=1.0/43560;    //Conversion from ft^2 to Acres

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float nft2,nacres,nmiles2;
 
    //Input or initialize values Here
    nft2=391876;
    
    //Process/Calculations Here
    nacres=nft2*CNVFTA;
    nmiles2=nft2*CNVFTM;
    
    //Output Located Here
    cout<<nft2<<"square feet = "<<nacres<<"acres"<<endl;
    cout<<nft2<<"square feet = "<<nmiles2<<"square miles"<<endl;

    //Exit
    return 0;
}

