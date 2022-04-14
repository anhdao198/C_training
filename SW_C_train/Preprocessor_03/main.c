
#include "debug_log.h"
int FunctionA(void) 
{
  int a = 2;
  LOG_WARN("a: %d\n", a);
  
  return 0;
}

int main(void) 
{
  float f = 1.234;
  
  LOG_INFO("Enter main function, f: %.2f\n", f);
  FunctionA();
  LOG_ERROR("An error %s", "happened\n");
  return 0;
}

