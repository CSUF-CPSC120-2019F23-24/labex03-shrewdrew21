// This program calculates a person's height in feet (') and inches (").
#include <iostream>
int main()
{
  // Varibles
  double height_in_inches = 74;
  double inches = 12;
  double feet;

  std::cout << "the person's height in inches";
  std::cin >> height_in_inches;

  //converting to feet
  feet = height_in_inches / inches;

  //display convertion
  std::cout << "The height of the person is 6'2";

}
