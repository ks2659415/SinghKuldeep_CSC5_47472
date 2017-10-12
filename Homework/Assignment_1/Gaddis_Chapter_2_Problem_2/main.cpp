/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kuldeep Singh
 * Created on September 17, 2017, 2:15 PM
 * Purpose: Sales Prediction
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float Sales; //The total sales the company generates per year in $
    float pSales; //Percentage that the East Coast division generates
    float eSales; //The amount the East Coast division generates in $
    
    Sales=8.6e6;
    pSales=.58;
    eSales=Sales*pSales;
    
    cout<<"This year The East Coast sales division generated $"<<eSales;

    return 0;
}

