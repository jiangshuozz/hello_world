#include <stdio.h>
unsigned int g_totalPidNum = 0;

int AddNewProc()
{
  if (g_totalPidNum > 10) {
    printf("AddNewProc fail!!");
    return -1;
  }
  
  printf("PROC ID: %d init success!", g_totalPidNum++);
  return 0;
}
