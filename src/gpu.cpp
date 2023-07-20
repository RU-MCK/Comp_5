
#include <iostream>
extern int buffer[8];
void output() {
  for (int i = 0; (i < 8); ++i) {
    std::cout << buffer[i] << " ";
  }
  std::cout << std::endl;
}