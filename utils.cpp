#include <iostream>

#include "utils.h"

using namespace std;

#ifdef _WIN32 // Windows

void clear_screen() {
  system("cls");
}

#else // Linux

void clear_screen() {
  system("clear");
}
#endif