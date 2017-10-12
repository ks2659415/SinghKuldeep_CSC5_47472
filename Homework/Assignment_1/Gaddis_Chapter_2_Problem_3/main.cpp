
/* 
 * File:   main.cpp
 * Author: Kuldeep Singh
 * Created on September 17, 2017, 2:35 PM
 * Purpose: Sales Tax
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float p; //Product purchased in $
    float sTax; //States Sales Tax in %
    float cTax; //County Sales Tax in %
    float tTax; //Total Sales Tax in $
    
    p=95;
    sTax=.04;
    cTax=.02;
    tTax=p*(sTax+cTax);
    
    cout<<"The total tax on the product purchases is $"<<tTax;

    return 0;
}

