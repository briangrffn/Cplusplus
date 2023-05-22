//#4 - Project | Monday, May 22, 2023
#include <iostream>
using namespace std;

int main() {

    //block letters project
    //height 7 and width 5 characters


    for (int i = 0; i < 7; ++i) {
        if (i==3)
            cout << "HHHHHH\n";

        else
            cout << "H    H\n";
    }
    cout << "\n";

    for (int i = 7; i < 14; ++i) {
        if (i==7 || i == 10 || i == 13)
            cout << "EEEEEE\n";

        else{
            cout << "E\n";
        }
    }
    cout << "\n";

    for (int i = 7; i < 14; ++i) {
        if (i==13){
            cout << "LLLLLLL\n";
        }
        else {
            cout << "L\n";
        }
    }
    cout << "\n";

    for (int i = 7; i < 14; ++i) {
        if (i==13){
            cout << "LLLLLLL\n";
        }
        else {
            cout << "L\n";
        }
    }
    cout << "\n";

    for (int i = 7; i < 14; ++i) {
        if (i == 7 || i == 13){
            cout << " OOOOO\n";
        }
        else {
            cout << "O     O\n";
        }

    }




    return 0;
}
