
/* 
 * File:   main.cpp
 * Author: Kuldeep Singh
 * Created on October 11, 2017, 6:00 PM
 * Purpose: Creating a class template
 */

//System Libraries 
#include <iostream>   //Input/Output Stream Library
#include <cstdlib> 
#include <ctime>
using namespace std;  //Standard Name-space under which System Libraries reside

//User Libraries

//Global Consumer - not variables only Math/Science/Conversion constants

//Function Prototypes
int getCards(unsigned int);

//Execution Begins here:

int main(int argc, char** argv) {
    //Declare Variables
    int dealer, dCard1, dCard2; //Dealer's total value and his cards' values
    int player, pCard1, pCard2; //Player's total value and his cards' values
    int turn; //turn 0 is players turn, turn 1 is dealers turn, turn 2 for end
    unsigned int seed; //seed for random number generator
    char choice; //choice Y or N
    bool validChoice, gameContinue, turns; //True or False
    
    //Initialize Variables
    gameContinue = true;
    turns = true;
    seed = time(NULL);
    cout << "Welcome to Blackjack! Game starting.." << endl;
    
    
    while(gameContinue){
        turn = 0;
        turns = true;
        //Deal cards out to player and dealer
        dCard1 = getCards(seed);
        seed += 10;
        dCard2 = getCards(seed);
        seed += 10;
        pCard1 = getCards(seed);
        seed += 10;
        pCard2 = getCards(seed);
        seed += 10;

        //Get total values for player and dealer
        dealer = dCard1 + dCard2;
        player = pCard1 + pCard2;
    
        //Process or map the inputs to the outputs
        cout<< endl << "The dealer has ? + " << dCard2 << endl;
        cout<< "You have " << pCard1 << " + " << pCard2 << endl << endl;
        
        //If Dealer gets 21
        if(dealer == 21 && player!= 21){
            cout<<"The dealer has " << dCard1 << " " << dCard2 << endl;
            cout<<"The dealers wins." << endl;
        }
        //If Player get 21
        else if(player == 21 && dealer != 21){
            cout<<"You have " << pCard1 << " " << pCard2 << endl;
            cout<<"You win!" << endl;
        }
        //Both Dealer and Player get 21
        else if(player == 21 && dealer == 21)
            cout << "You both have 21! Game tied!" << endl;
        
        //Whether the player want a "hit," an extra card
        else{
            while(turns){
                if(turn == 0){
                    seed+= 10;
                    do{
                        cout << "Would you like to hit? Y or N" << endl;
                        cin >> choice;
                        if(choice == 'y' || choice == 'Y' || 
                                choice == 'n' || choice == 'N')
                            validChoice = true;
                        else{
                            cout<<"That is not a valid choice. "
                                    "Please enter Y or N." << endl;
                            validChoice = false;
                        }
                    } while(validChoice == false);

                    if(choice == 'y' || choice == 'Y'){
                        int newCard = getCards(seed);
                        cout << "You got a " << newCard << endl << endl;;
                        player += newCard;
                        if(player > 21){
                            cout<< "You have bust." << endl; 
                            //Bust if total is over 21 
                            turn = 2; 
                            continue;
                        }
                        else if(player == 21){
                            turn = 2;
                            continue;
                        }
                    }
                    turn = 1;
                }
                //Whether dealer wants a hit
                if(turn == 1){
                    seed += 20;
                    cout<<"It is the dealer's turn" << endl;
                    if(dealer < 17){
                        cout << "The dealer has decided to hit" << endl;
                        int newCard = getCards(seed);
                        cout << "Dealer got " << newCard << endl << endl;
                        dealer += newCard;
                        if(dealer > 21){
                            cout<< "The dealer has bust." << endl;
                            //Bust if total is over 21
                            turn = 2; 
                            continue;
                        }
                        else if(dealer == 21){
                            turn = 2;
                            continue;
                        }
                    }
                    else
                        cout << "The dealer has decided to stay" << endl << endl;
                    if(choice == 'n' || choice == 'N')
                        turn = 2;
                    else
                        turn = 0;
                }
                //Reveal the results
                if(turn == 2){
                    cout << "The dealer has " << dealer << endl;
                    cout << "You have " << player << endl;
                    if(player > 21)
                        cout << "The dealer wins." << endl;
                    else if (dealer > 21)
                        cout << "You win!" << endl;
                    else if(dealer > player)
                        cout << "The dealer wins." << endl;
                    else if (player > dealer)
                        cout << "You win!" << endl;
                    else
                        cout << "You have both tied!" << endl;
                    //Ask if the user wants to play again
                    do{
                        cout << "Would you like to play again? Y or N" << endl;
                        cin >> choice;
                        if(choice == 'y' || choice == 'Y'){
                            gameContinue = true;
                            turns = false;
                            validChoice = true;
                        }
                        else if(choice == 'n' || choice == 'N'){
                            gameContinue = false;
                            turns = false;
                            validChoice = true;
                        }
                        else{
                            cout<<"That is not a valid choice. "
                                    "Please enter Y or N." << endl;
                            validChoice = false;
                        }
                    } while(validChoice == false);

                }
            }
        }
                   
    }
    
    
    //Display/Output game end statement
    cout << "Thank you for playing. Game ended." << endl;
    //Exit the program
    return 0;
}

int getCards(unsigned int seed){ //Random Card Generator Function
    srand (seed);
    int c = rand() % 13 + 1;
    if(c > 10)
        c = 10;
    return c;
}
