#include <iostream>
#include "kbd.h"
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
int cmd(std::string &str) {
  if (str == "sum")
    return 1;
  else if (str == "save")
    return 2;
  else if (str == "load")
    return 3;
  else if (str == "input")
    return 4;
  else if (str == "display")
    return 5;
  else if (str == "exit")
    return 6;
  else
    return 0;
}
int main() {
  std::string command;
  while (command != "exit") {
    std::cout << "Input the command: " << std::endl
              << "<sum> <save> <load> <input> <display> <exit>" << std::endl;
    std::cin >> command;
    switch (cmd(command)) {
      case 0://if error
        std::cout << "Enter error! Repeat." << std::endl;
        break;
      case 1://if sum
        compute();
        break;
      case 2://if save
         save();
        break;
      case 3://if load
        load();
        break;
      case 4://if input
        kbd();
        break;
      case 5://if display
        output();
        break;
      case 6://if exit
        std::cout << "EXIT" << std::endl;
        break;
      default:std::cout << "ERROR!" << std::endl;
        break;
    }
  }

  return 0;
}
