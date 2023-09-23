#include <iostream>

int main() {
  std::cout << "Input a Value :";
  int x;
  std::cin >> x;
  std::cout << "Value after plus 3,and the result times 9: ";
  int y = (x+3)*9;
  std::cout << y << std::endl;
  return 0;
}

//1. Write the C++ program that prompts a user to enter an integer value as follows:
Enter an integer:
The program takes the user-input integer value and stores it into the variable called x. The x variable has the int data type. The program then displays the user-input integer value as follows if the user-input integer value is 8:
The integer you have just entered is: 8
2. Modify the above C++ program such that it computes the user input value plus 3,and the result times 9. The program then displays the computation result asfollows if the user-input integer value is 8:
The integer you have just entered plus 3,
then the result times 9: 99//
