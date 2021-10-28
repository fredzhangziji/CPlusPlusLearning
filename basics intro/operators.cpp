#include <iostream>

using namespace std;

int main(){

      // a++
      int a = 10;
      a++;
      cout << a << endl; // 11

      // ++b
      int b = 10;
      ++b;
      cout << b << endl; // 11

      // difference between ++a and a++
      // ++a will do the operation first, then do the expression
      // a++ will do the expression first, then do the operation
      int a2 = 10;
      int b2 = ++a2 * 10; // a2 = 10+1; b2 = (10+1)*10
      cout << "b2 is: " << b2 << endl; // 110

      int a3 = 10;
      int b3 = a3++ * 10; // b3 = 10*10; a3 = 10+1
      cout << "b3 is: " << b3 << endl; // 100

      // logic operators
      int flag1 = true;
      int flag2 = false;

      cout << "flag1 && flag2 = " << (flag1 && flag2) << endl; // 0
      cout << "flag1 || flag2 = " << (flag1 || flag2) << endl; // 1
      cout << "flag1 == flag2 : " << (flag1 == flag2) << endl; // 0
      cout << "!flag1 = " << !flag1 << endl; // 0

      system("Pause");

      return 0;
}