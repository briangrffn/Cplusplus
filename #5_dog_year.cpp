//#5 - Project | Monday May 22, 2023
#include <iostream>

using namespace std;

int main() {

    int age{0};
    string name;

    cout << "Enter your dog's name:";
    cin >> name;
    cout << "Enter your dog's age:";
    cin >> age;

    if(age > -1 and age < 50){
        cout << "\nYour dog's name is " << name << ", and he's " << 4 * age << " in human age.\n";
    }
    else {
        cout << "\nInvalid input, please try again!";
    }








    return 0;
}
