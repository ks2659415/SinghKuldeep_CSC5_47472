
/* 
 * File:   main.cpp
 * Author: Kuldeep Singh
 * Created on September 17, 2017, 3:00 PM
 * Purpose: Average of Values
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float a,b,c,d,e; //Five different variables
    float sum; //Sum of variables
    float avg; //Average of variables
   
    a=28;
    b=32;
    c=37;
    d=24;
    e=33;
    sum=a+b+c+d+e;
    avg=sum/5;
    
    cout<<"Average = "<<avg;

    return 0;
}

