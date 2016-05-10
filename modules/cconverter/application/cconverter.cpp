// Copyright 2016 Rumyantsev Alexander

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include <fstream>

#include "include/currency_converter.h"

int main(int argc, const char* argv[]) {
  // CurrencyConverter app;
  // std::string output = app(argc, argv);
  // printf("%s\n", output.c_str());

  printf("Hello World!\n");

  std::ofstream fout("cpairs_db.txt");

  fout << "RUB\\USD 1.2 3.4";

  fout.close();

  printf(argv[0]);

  return 0;
}
