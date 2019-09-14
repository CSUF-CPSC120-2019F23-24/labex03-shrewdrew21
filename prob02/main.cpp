// This program calculates the amount of paint needed.

#include <iostream>

int main()
{
  // one gallon of paint covers 340 square feet
  int coverage = 340;
  int height = 6;
  int length = 100;
  int width = 4;
  int area = 48;
  // calculate how many gallons of paint it will take to cover
  // the area with 2 coats of paint
  
  int gallons = area / coverage;

  std::cout << "It will take " << coverage << " 3.52941 gallons of paint./n";

  return 0;
}
