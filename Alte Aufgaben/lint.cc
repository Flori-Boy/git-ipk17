#include "lint.hh"
#include <string>

bool check_Paranthesis(std::string symbols) {
  std::string parL = "(";
  std::string parR = ")";
  int check_counter = 0;
  for (int i = 0; i < symbols.size(); ++i) {
    if (symbols[i] == parL[0]) {
      check_counter++;
    } else if (symbols[i] == parR[0]) {
      check_counter--;
    }
  }
  if (check_counter == 0)
    return true;
  else
    return false;
}