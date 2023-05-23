//#8 - Project | Tuesday May 23, 2023
#include <iostream>
#include <iomanip>


using namespace std;
int main() {
    //Piggy bank
    //Why is it called a piggy bank?
    //Household items such as plates and pots were made from an affordable clay called 'pygg'.

    //1 quarter -> 25 cents
    //1 dime -> 10-cent coin
    //1 nickel -> 5 cents
    //penny -> one-cent coin

    int quarters, dimes, nickels, pennies;
    float sum;

    cout << "HELLO, THIS IS PIGGY BANK PROGRAM\n";
    cout << "You enter your quarters, dimes, nickels and pennies, and the program calculates how much money you have.\n";
    cout << "How many quarters?";
    cin >> quarters;
    cout << "How many dimes?";
    cin >> dimes;
    cout << "How many nickels?";
    cin >> nickels;
    cout << "How many pannies?";
    cin >> pennies;


        sum = quarters * 0.25 + dimes * 0.10 + nickels * 0.05 + pennies * 0.01;
        cout << fixed << setprecision(2);
        cout << "You have $" << sum;
        cout << "\nYou have " << sum * 100 << " cents\n";

    return 0;
}
