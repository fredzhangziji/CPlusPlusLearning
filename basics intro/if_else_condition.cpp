#include <iostream>

using namespace std;

int main(){
      double KDA = 0;
      cout << "Please enter your average KDA in League of Legends: " << endl;
      cin >> KDA;

      if (KDA > 5){
            cout << "Are you faker?" << endl;
      }
      else if (KDA > 3){
            cout << "Nice, you are like Showmaker!" << endl;
      }
      else if (KDA > 1){
            cout << "Not bad, but you can do better." << endl;
      }
      else if (KDA > 0.5){
            cout << "Umm, you need more practice." << endl;
      }
      else {
            cout << "Uninstall PLEASE." << endl;
      }

      system("Pause");

      // conditional/tenary operator 三目运算符
      // use tenary operator to assign 100 to the smaller variable
      int a = 10;
      int b = 20;
      
      cout << "The smaller one was " << (a > b ? a : b);
      cout << ". Now the value of it is " << 100 << endl;
      
      (a > b ? a : b) = 100;

      return 0;
}
