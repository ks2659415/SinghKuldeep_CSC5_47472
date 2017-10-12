
/* 
 * File:   main.cpp
 * Author: Kuldeep Singh
 * Created on September 17, 2017, 2:45 PM
 * Purpose: Restaurant Bill
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float meal; //Price of meal in $
    float pTax; //Percent tax on the meal
    float tax; //Tax on the meal in $
    float pTip; //Percent of tip
    float tip; //Tip on the meal in $
    float bill; //Total bill of the meal in $
    
    meal=88.67;
    pTax=.0675;
    tax=meal*pTax;
    pTip=.2;
    tip=meal*pTip;
    bill=meal+tax+tip;
    
    cout<<"Price of Meal = $"<<meal<<endl;
    cout<<"Tax on the Meal = $"<<tax<<endl;
    cout<<"Tip on the Meal = $"<<tip<<endl;
    cout<<"Total bill = $"<<bill<<endl;

    return 0;
}

