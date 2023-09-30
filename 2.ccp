#include <iostream>

int main() {
     int cm;
     int em;
     int oa = cm*40/100+em*60/100;
  std::cout << "Press 1 for Exercise 2 Part1&2 /n";
  std::cout << "Press 2 for Exercise 2 Part3&beyond /n";
  int part;
  std::cin >> part;
    if (part=1){ 
      int units;
      std::cin >> units;
      if (units <=0) 
        std::cout << "Input error\n";
      int total = units*5;
      std::cout << total;  
    return 0;
    exit(0);
    }else if (part=1){
       
        std::cout << "Enter coursework marks:  ";
        std::cin >> cm;
        
        std::cout << "Enter examination marks: ";
        std::cin >> em;
        if (cm >= 50 && em >= 50){
          std::string yn[2] = {"Pass", "Fail"};
          
          std::cout << "Your overall result is ";
          std::cout << oa;
          std::cout << yn[1];
        }else{ 
          std::cout << "Your overall result is ";
          std::cout << oa;
          std::cout << yn[2];
    return 0;
    exit(0);
    }          
}
