#include <iostream>
#include "ram.h"

int buffer[8];

void write(int number, int count) {
  buffer[count] = number;
}
void read() {
  for (int i = 0; (i < 8); ++i)
    std::cout << buffer[i];
  std::cout << std::endl;
}
