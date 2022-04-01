#include<iostream>
#include<string>

int lookup_speeding_fine(int over);

int main()
{
 int over = 0;
 std::cout << "my speeding fine is: " << lookup_speeding_fine(over) << std::endl;
  over = 10;
 std::cout << "my speeding fine is: " << lookup_speeding_fine(over) << std::endl;
  over = 21;
 std::cout << "my speeding fine is: " << lookup_speeding_fine(over) << std::endl;
  over = 50;
 std::cout << "my speeding fine is: " << lookup_speeding_fine(over) << std::endl;
 return 0;
}
