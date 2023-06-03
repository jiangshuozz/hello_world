#include <stdio.h>
#include "algo.h"

int main(){
  printf("\nHello, world!");
  AddNewProc();
  for (int i = 0; i < 12; i++) {
    AddNewProc();
  }
  return 0;
}
