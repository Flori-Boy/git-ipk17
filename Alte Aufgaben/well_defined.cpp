#include "input.hh"
#include "lint.hh"
#include <iostream>

void statement_reader(bool indicator, int statement_number) {
  if (indicator) {
    std::cout << std::endl
              << "Das Statement " << statement_number << " war richtig!"
              << std::endl;
  } else {
    std::cout << std::endl
              << "Das Statement " << statement_number << " war falsch!"
              << std::endl;
  }
}

int main(int argc, char const *argv[]) {
  std::string s1 = "(i bims richtig geklammert)";
  statement_reader(check_Paranthesis(read_stream(std::cin)), 1);
  return 0;
}