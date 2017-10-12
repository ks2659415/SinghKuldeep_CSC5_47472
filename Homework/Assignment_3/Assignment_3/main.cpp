
/* 
 * File:   main.cpp
 * Author: Kuldeep Singh
 * Created on October 11, 2017, 6:00 PM
 * Purpose: Creating a class template
 */

//System Libraries 
#include <iostream>     //Input/Output Stream Library
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Consumer - not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins here:

int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    unsigned seed;

    
    //Initialize Variables
    cout<<"Pick a Problem from the list: "<<endl;
    cout<<"Problem 1"<<endl;
    cout<<"Problem 2"<<endl;
    cout<<"Problem 3"<<endl;
    cout<<"Problem 4"<<endl;
    cout<<"Problem 5"<<endl;
    cout<<"Problem 6"<<endl;
    cout<<"Problem 7"<<endl;
    cout<<"Problem 8"<<endl;
    cout<<"Problem 9"<<endl;
    cout<<"Problem 10"<<endl;
    cin>>choice;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
     switch(choice){  
        case 1:
            //Problem 1 in Gaddis 8th Edition: "Minimum/Maximum"
            int number1;
            int number2;
            int Max, Min;

            cout << "Enter two different integers separated by a space: ";

            cin >> number1 >> number2;

            Min = (number1 < number2) ? (number1) : (number2);
            Max = (number1 > number2) ? (number1) : (number2);

            cout << "\nThe smaller number is " << Min << endl;
            cout << "The larger number is " << Max << endl;
            break;
            
        case 2:
            //Problem 3 in Gaddis 8th Edition: "Magic Dates"
            int day, month, year, magicOrNoMagic;

            cout << "Please Enter a Month:\n";
            cin >> month;
            cout << "Please enter a day:\n";
            cin >> day;
            cout << "Please enter a two digit year:\n";
            cin >> year;
            
            magicOrNoMagic = month * day;
            
            if (magicOrNoMagic == year)
                    cout << "Date is Magic!\n";
            else
            cout << "Date is Not Magic!\n";
            break;
            
        case 3:
            //Problem 4 in Gaddis 8th Edition: "Areas of Rectangles"
            int length1, width1, area1, rectangle1;
            int length2, width2, area2, rectangle2;

            cout << "Please enter width for Rectangle One: ";
            cin >> width1;

            cout << "Please enter length for Rectangle One: ";
            cin >> length1;

            area1 = width1 * length1;

            cout << "Please enter width for Rectangle Two: ";
            cin >> width2;

            cout << "Please enter length for Rectangle Two: ";
            cin >> length2;

            area2 = width2 * length2;

            if (area1 == area2)
                    cout << "Rectangle(One) & Rectangle(Two) are equal!"<<endl;
            else if (area1 > area2)
                    cout << "Rectangle(one) is greater!"<<endl;
            else if (area1 < area2)
                    cout << "Rectangle(two) is greater!"<<endl;
            break;
            
        case 4:
            //Problem 5 in Gaddis 8th Edition: "Body Mass Index"
            float Weight,Height,BMI;

            cout << "Welcome to the Body Mass Index Calculator!\n";
            cout << "Please enter your weight in pounds: ";
            cin  >> Weight;
            cout << "Please enter your height in inches: ";
            cin  >> Height;

            // Calculate body mass index
            BMI = Weight*(703/pow(Height, 2));

            // Display body mass index
            cout << "Your BMI is " << BMI << endl;
            if (BMI >= 18.5 && BMI <= 25)
                    cout << "You are of optimal weight."<<endl;
            else if (BMI >= 25)
                    cout << "You are overweight."<<endl;
            else
            cout << "You are underweight."<<endl;
            break;
            
        case 5:
            //Problem 8 in Gaddis 8th Edition: "Color Mixer"
            int color1, color2;
            int red, blue, yellow;

            red = 1;
            blue = 2;
            yellow = 3;

            cout << "Please choose two colors using the following numbers, " <<
                    "separated by a space" << endl;
            cout << "1 - Red" << endl << "2 - Blue" << endl << "3 - Yellow" << endl;

            cin >> color1 >> color2;

            if (color1 == red){ 
                    if (color2 == blue)
                            cout << "Purple" << endl;
                    else if (color2 == yellow)
                            cout << "Orange" << endl;
            }
            else if (color1 == blue){
                    if (color2 == red)
                            cout << "Purple" << endl;
                    else if (color2 = yellow)
                            cout << "Green" << endl;
            }
            else if (color1 == yellow){
                    if (color2 = red)
                            cout << "Orange" << endl;
                    else if (color2 = blue)
                            cout << "Green" << endl;
            }
            else
                    cout << "Please choose 2 primary colors (lower case)." << endl;
            break;
            
        case 6:
            //Problem 9 in Gaddis 8th Edition: "Change for a Dollar Game"
            float pennies, nickels, dimes, quarters, total;
            cout << "Enter the number of pennies: ";
            cin >> pennies;
            cout << "Enter the number of nickels: ";
            cin >> nickels;
            cout << "Enter the number of dimes: ";
            cin >> dimes;
            cout << "Enter the number of quarters: ";
            cin >> quarters;

            total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

            if(total == 1.00)
            cout << "Congratulations, You Win!" << endl;
            else
            {
            if(total < 1.00 && total > 0)
            {
            cout << "You entered less than one dollar." << endl;;
            }
            else 
            {
            if(total > 1.00)
            {
            cout << "You entered more than one dollar." << endl;
            }
            else
            {
            cout << "The number of coins have to be greater than 0!" << endl;
            }
            }
            }
            break;
            
        case 7:
            //Problem 11 in Gaddis 8th Edition: "Math Tutor"
            int num1, num2, sum, answer;
            seed = time(0);
            srand(seed);

            num1 = 100 + rand() % 999;
            num2 = 100 + rand() % 999;

            sum = num1 + num2;

            cout << setw(5) << num1 << endl;
            cout << setw(5) << num2 << " + \n";
            cout << setw(5) << "------\n";

            cout << "Enter the answer: ";
            cin >> answer;

            if(answer == sum)
            cout << "Congratulations, the answer is correct!" << endl;
            else
            cout << "Incorrect answer!! The correct answer is: " << sum << endl;
            break;
            
        case 8:
           //Problem 14 in Gaddis 8th Edition: "Bank Charges"
            int checks;
            float beginningBalance, feeOne, feeTwo, totalFees;

            cout << "Enter beginning balance: $";
            cin >> beginningBalance;

            cout << setprecision(2) << fixed;
            if(beginningBalance < 0)
            cout << "URGENT MESSAGE! YOUR ACCOUNT IS OVERDRAWN! \n\n";
            else
            {
            cout << "Enter number of checks written: ";
            cin >> checks;

            if(beginningBalance < 400)
            feeOne = 15.00;
            else
            feeOne = 0.00;

            if(checks >= 0 && checks < 20)
            feeTwo = checks * 0.10;
            if(checks >= 20 && checks <= 39)
            feeTwo = checks * 0.08;
            if(checks >= 40 && checks <= 59)
            feeTwo = checks * 0.06;
            if(checks >= 60)
            feeTwo = checks * 0.04;
            if(checks < 0)
            cout << "The number of checks cannot be negative"<<endl;

            totalFees = feeOne + feeTwo;

            cout<< "Monthly Fees"<<endl;
            cout << "Low Balance fee: $" << feeOne << endl;
            cout << "Check fees: $" << feeTwo << endl;
            cout << "Total Monthly fees: $" << totalFees << endl;
            }
            break;
            
        case 9:
            //Problem 19 in Gaddis 8th Edition: "Spectral Analysis"
            float wavelength;

            cout << "Enter the wavelength (in meters): ";
            cin >> wavelength;

            if(wavelength < 0.00 && wavelength > 0.01)
            cout << "The wave is a Radio Wave"<<endl;
            else if(wavelength < 0.01 && wavelength > 0.001)
            cout << "The wave is a Microwave"<<endl;
            else if(wavelength < 0.001 && wavelength > 0.0000007)
            cout << "The wave is Infrared"<<endl;
            else if(wavelength < 0.0000007 && wavelength > 0.0000004)
            cout << "The wave is Visible Light"<<endl;
            else if(wavelength < 0.0000004 && wavelength > 0.00000001)
            cout << "The wave is Ultraviolet"<<endl;
            else if(wavelength < 0.00000001 && wavelength > 0.00000000001)
            cout << "The wave is X-Rays"<<endl;
            else if(wavelength < 0.00000000001)
            cout << "The wave is Gamma Rays"<<endl;
            else
            cout << "Wavelength is not valid"<<endl;
            break;
            
        case 10:
        //Problem 22 in Gaddis 8th Edition: "Freezing and Boiling Points"
            float temperature;

            cout << "Enter a temperature in Farenheit: ";
            cin >> temperature;

            cout << "\nSubstances that will freeze: " << endl;
            if(temperature <= -173)
            cout << "Ethyl Alcohol " << endl;
            if(temperature <= -38)
            cout << "Mercury " << endl;
            if(temperature <= -362)
            cout << "Oxygen " << endl;
            if(temperature <= 32)
            cout << "Water "<< endl;
            cout << "Substances that will boil: " << endl;
            if(temperature >= 172)
            cout << "Ethyl Alcohol " << endl;
            if(temperature >= 676)
            cout << "Mercury " << endl;
            if(temperature >= -306)
            cout << "Oxygen " << endl;
            if(temperature >= 212)
            cout << "Water " << endl;
            break;
            
        default:
            cout<<"That is not a valid choice."<<endl;
            break;           
        
     }
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

