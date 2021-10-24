/*
There are two ways of declaring constants:
1. #define Const1 1 before the file
2. const int Const2 = 2 in main
*/

#include <iostream>
#define day 7 // declare a const here

using namespace std;

int main() {

      cout << "There are " << day << " days a week." << endl;
      // day = 8 Error! Cuz it's a const.

      const int month = 12;
      cout << "There are " << month << " months a year." << endl;
      // month = 14 Error! Cuz it's a const.

      system("pause");

      return 0;
}