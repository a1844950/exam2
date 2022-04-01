#include <iostream>
using namespace std;
 
int count_number_in_range(int vals[], int length, int bottom, int top)
{
  ///counter
  int count = 0;
  
  for (int i = 0; i < length; i++)
  {
    ///Top - Botton
    if (vals[i] <=top && >=botton)
      count++;
  }
  return count;
}
