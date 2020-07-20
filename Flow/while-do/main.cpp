#include <iostream>

using namespace std;

int main () {
  // While condition
  int condition = 1;
  while (condition <= 5) {
    cout << condition << " ";
    ++condition;
  }
  cout << "\n\n";

  // additional while
  // a little example of a choice
  int sum = 0;
  int choice = 1;
  bool theState = true;
  cout << "ADDITION" << endl;
  while (theState) {
    cout << "total = " << sum << endl;
    cout << "1. add \n0. finish" << endl;
    cout << "your answer (only 1 or 0): ";
    cin >> choice;
    if (choice == 1) {
      int num = 0;
      cout << "enter number you want add to total : ";
      cin >> num;
      sum += num;
    } else if (choice == 0) {
      theState = false;
    } else {
      cout << "please enter only 1 or 0" << endl;
    }
  }
  cout << "Your total is : " << sum << endl;
  cout << "\n\n";


  // do while
  /*
  the syntax is:
  do {
    something (this body of loops)
  }
  while (condition); (will loop again if condition is true)
  */
  // subtraction
  int total = 0;
  int cond = 1; bool status = true;
  cout << "SUBTRACTION" << endl;
  do {
    cout << "Total is : " << total << endl;
    cout << "1. reduce \n0. finish" << endl;
    cout << "your answer (only 1 or 0): ";
    cin >> cond;
    if (cond == 1) {
      int num = 0;
      cout << "enter number you want reduce to total : ";
      cin >> num;
      total -= num;
      num = 0;
    } else if (cond == 0) {
      status = false;
    } else {
      cout << "please enter only 1 or 0" << endl;
    }
  } while (status);
    cout << "Your total is : " << total << endl;
  return 0;
}