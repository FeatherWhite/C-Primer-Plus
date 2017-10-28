#include <stdio.h>

void recurrence(int );

int main(void)
{
  int result;
  int division = 100;
  recurrence(division);
  return 0;
}

void recurrence(int division)
{
  if(division > 2)
  {
    division = division / 2;
    recurrence(division);
    printf("division1:%d\n",division);
    recurrence(division);
    printf("division2:%d\n",division);
  }
}
