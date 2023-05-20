//#1 - Project | Saturday, May 20, 2023
#include <iostream>

using namespace std;

int main() {
  
  //This program calculates weight on Other Planets

    cout << "How to Calculate Weight on Other Planets\n";
    cout << "Weight on Other Planet = Weight on Earth x Multiple of Earth's Gravity\n";

    //It is calculated by myltiplying weight by the Planet's Gravitiy
    cout << "# Planet       Multiple of Earth's Gravity\n"
         << " 1. Sun         27.01\n"
         << " 2. Mercury     0.38\n"
         << " 3. Venus       0.91\n"
         << " 4. Earth       1 (defined)\n"
         << " 5. Moon        0.166\n"
         << " 6. Mars        0.38\n"
         << " 7. Jupiter     2.34\n"
         << " 8. Saturn      1.06\n"
         << " 9. Uranus      0.92\n"
         << "10. Neptune     1.19\n"
         << "11. Pluto       0.06\n";

    //takes user's weight as an input
    double n;
    cout << "Enter your weight in kg: ";
    cin >> n;
    
    //assigning planets by thier numbers based on list above
    int planets = 1; 2; 3; 4; 5; 6; 7; 8; 9; 10; 11;
    cout << "Enter the planet you want in number from 1 to 11: ";
    //choose the Planet
    cin >> planets;

    //output
    switch(planets){

        case 1:
            cout << n * 27.01 << " kg\n";
            break;
        case 2:
            cout << n * 0.38 << " kg\n";
            break;
        case 3:
            cout << n * 0.91 << " kg\n";
            break;
        case 4:
            cout << n * 1 << " kg\n";
            break;
        case 5:
            cout << n * 0.166 << " kg\n";
            break;
        case 6:
            cout << n * 0.38 << " kg\n";
            break;
        case 7:
            cout << n * 2.34 << " kg\n";
            break;
        case 8:
            cout << n * 1.06 << " kg\n";
            break;
        case 9:
            cout << n * 0.92 << " kg\n";
            break;
        case 10:
            cout << n * 1.19 << " kg\n";
            break;
        case 11:
            cout << n * 0.06 << " kg\n";
            break;
        //outputs when the number isn't between 1 and 11
        default:
            cout << "Invalid number\n";
            break;
    }

    return 0;
}
