//#6 - Project | Monday May 22, 2023
#include <iostream>

using namespace std;

int main() {

    //without variables
      int dog_age, later_years, first_years, human_age;
      cout << "This program can only work for dog older than two.\n";
      cout << "Enter you dog's age:";
      cin >> dog_age;

      first_years = 21;
      later_years = (dog_age - 2) * 4;
      human_age = first_years + later_years;

      cout << "Your dog is " << human_age << " years old in human age.\n";

    return 0;
}
