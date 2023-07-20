
#include "iostream"
#include "cpu.h"

extern int buffer[8];
void compute() {
  int sum = 0;
  for (int i = 0; (i < 8); ++i)
    sum += buffer[i];
  std::cout << "Sum = " << sum << std::endl;
}
