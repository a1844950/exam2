#include <iostream>

int *shift_right(int *vals, int len, int amount);

int main()
{
  int vals[] = { 1,2,3,4,5 };
  shift_right(vals,5,2);
}
