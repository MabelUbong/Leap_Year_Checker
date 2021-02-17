#include <iostream>

int main() {

  int year = 0;

  std::cout << "Enter a year: ";
  std::cin >> year;

  if (year < 1000 || year > 9999) {

    std::cout << "Write a 4 digit number.\n";
  }

  else if (year % 4 == 0) {
    std::cout << "Leap Year.\n";
  }
  else if (year % 100 == 0 && year % 400!=0) {
    std::cout << "NOT Leap Year.\n";
  }
  else if (year % 400 == 0) {
    std::cout << "Leap Year.\n";
  }
  else {
    std::cout << "NOT Leap Year.\n";
  } 
}
