/*
short, int, long, long long;
sizeof(type) will return the Memory usage.


*/

#include <iostream>

using namespace std;

int main() {
      
      cout << "short memory usage: " << sizeof(short) << endl;
      cout << "int memory usage: " << sizeof(int) << endl;
      cout << "long memory usage: " << sizeof(long) << endl;
      cout << "long long memory usage: " << sizeof(long long) << endl;

      system("pause");

      return 0;

}