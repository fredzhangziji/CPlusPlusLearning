/*
short, int, long, long long;
sizeof(type) will return the Memory usage.


*/

#include <iostream>
#include <string>

using namespace std;

int main() {
      
      // ************************************
      // size of int type
      cout << "short memory usage: " << sizeof(short) << endl;
      // 2
      cout << "int memory usage: " << sizeof(int) << endl;
      // 4 
      cout << "long memory usage: " << sizeof(long) << endl;
      // 4
      cout << "long long memory usage: " << sizeof(long long) << endl;
      // 8

      system("pause"); 

      // *************************************
      // float and double
      // float: 7 valid digits
      // double: 15-16 valid digits

      float f1 = 3.14;
      double d1 = 3.14;

      cout << "f1: " << f1 << endl;
      cout << "d1: " << d1 << endl;

      cout << "float memory usage: " << sizeof(float) << endl;
      cout << "double memory usage: " << sizeof(double) << endl;
      cout << "size of f1: " << sizeof(f1) << endl;
      cout << "size of d1 : " << sizeof(d1) << endl;

      // Scientific notation
      float f2 = 3e2; // 3 * 10 ^ 2
      float f3 = 3e-2; // 3 * 0.1 ^ 2
      cout << "f2 is " << f2 << "; f3 is " << f3 << endl;

      system("pause");

      // ***********************************
      // character - single character 字符
      // with single quotation mark

      char ch = 'a';
      cout << ch << endl;
      cout << "char memory usage: " << sizeof(char) << endl;
      // ch = "a"; wrong cuz you can't use double quotation mark
      // ch = 'abc'; wrong cuz char can only have 1 letter

      cout << "corresponding ASCII value: " << int(ch) << endl;
      
      ch = 98; // we can assign ASCII value to the character, and it 
               // will print out the character (since it's type is char)
      
      cout << "ASCII value 98 is: " << ch << endl;

      cout << endl;

      // escape char 转义字符

      cout << "\\" << endl; // slash
      cout << "\tHello" << endl; // tab
      cout << "\n" << endl; // newline

      system("pause");

      // **********************************
      // string 字符串

      // in C
      char str1[] = "hello world in C"; // use double quotation mark
      cout << str1 << endl;

      // in C++ 
      // need to add #include <string>
      // Here, <iostream> might include the <string>, but we should still
      // add #include <string> just in case.
      string str2 = "hello world in C++";
      cout << str2 << endl;

      system("pause");

      // *************************************
      // boolean
      cout << "bool memory usage: " << sizeof(bool) << endl;
      bool flag = true;
      cout << flag << endl; // 1
      
      flag = false;
      cout << flag << endl; // 0

      system("pause");


      return 0;

}