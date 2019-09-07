
// This program calculates a person's height in feet (') and inches (")

#include <iostream>

int main()
{
  int inches;
  std::cout << "what is the person \"inches\" in hieght ";
  std::cin >> inches;
  //variables to calculate feet and inches

  int heightFeet=inches / 12;
  int heightInches=inches % 12;

  std::cout << "the height of the person is"<<heightFeet<<"\' "<<heightInches<<"\"";


return 0;
}
