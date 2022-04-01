#include<iostream>
using namespace std;


int* shift_right(int* vals, int len,int amout);


int main()
{
 int vals[] = {5,4,3,2,1,1 };
 int * s = shift_right(vals, 6,3);
 for (int i = 0; i < 6; i++)
 {
  cout << s[i];

 }

}
