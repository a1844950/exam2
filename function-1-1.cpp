#include<iostream>

int* shift_right(int* vals, int len, int amout)
{
 int* tmp = new int[len];
 int temp;
 for (int i = 0; i < amout; i++) {
  temp = vals[len - 1];
  for (int j = len - 1; j > 0; j--) {
   vals[j] = vals[j - 1];
  }
  vals[0] = temp;
 }
 for (int i = 0; i < amout; i++) {
  vals[i] = 0;
 }
 //
 for (int i = 0; i < len; i++)
 {
  tmp[i] = vals[i];
 }
 return tmp;
}
