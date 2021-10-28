#include <iostream>

using namespace std;

int main(){
      // There are three pigs. Enter their weights and compare which
      // one is the heaviest.
      double pigA = 0;
      double pigB = 0;
      double pigC = 0;

      cout << "Please enter A's weight: " << endl;
      cin >> pigA;
      cout << "Please enter B's weight: " << endl;
      cin >> pigB;
      cout << "Please enter C's weight: " << endl;
      cin >> pigC;

      if (pigA > pigB && pigA > pigC){
            cout << "pigA is the heavieset." << endl;
      }
      
      else if (pigB > pigA && pigB > pigC){
            cout << "pigB is the heaviest." << endl;
      }

      else{
            cout << "pigC is the heaviest." << endl;
      }

      return 0;
}