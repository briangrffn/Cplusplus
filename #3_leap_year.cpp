//#3 - Project | Sunday, May 21, 2023
#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Enter a year: ";
    //takes an input in 4-digit number
    cin >> n;

    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
        cout << n << " falls on a year.\n";
    }
    else if (n < 1000 || n > 9999){
        cout << "Invalid entry.\n";
    }
    else {
        cout << n << " is not a leap year.\n";
    }


    return 0;
}
