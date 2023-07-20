
#include <iostream>
#include "ram.h"
#include "kbd.h"

void kbd() {
  int count = 0;
  int number = 0;
  while (count != 8) {
    std::cout << "Input number: " << std::endl
              << "for exit input <-1>" << std::endl;
    std::cin >> number;
    if (number == -1)
      break;
    else if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      std::cout << "That input is invalid. Please try again.\n";
    } else {
      std::cin.ignore(32767, '\n');
      write(number,count);
      count++;
    }
  }
}
