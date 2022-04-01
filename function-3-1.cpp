#include <iostream>
#include <stdlib.h>
using namespace std;
 
int count_number_in_range(int vals[], int length, int bottom, int top)
{
  ///counter
  int count = 0;
  
  for (int i = 0; i < length; i++)
  {
    ///Top - Botton
    if (vals[i] <=top && vals[i]>=bottom)
      count++;
  }
  return count;
}
