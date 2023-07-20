
#include <fstream>
#include <iostream>
#include "disk.h"

std::fstream dt;
extern int buffer[8];

void save() {
  dt.open("data.txt",std::fstream::out);
  if (!dt.is_open()) {
    std::cout << "Open file error!" << std::endl;
  } else {
    for (int i = 0; (i < 8); ++i)
      dt << buffer[i] << std::endl;
  }
  dt.close();
}
void load() {
  dt.open("data.txt");
  if (!dt.is_open()) {
    std::cout << "Open file error!" << std::endl;
  } else {
    int numb = 0;
    for (int i = 0; (!dt.eof()); ++i) {
      dt >> numb;
      buffer[i] = numb;
    }
  }
  dt.close();
}
