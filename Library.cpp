#include <iostream>
using namespace std;

class Library {
public:
    void e1() {
        int part; //choose what Exercise 1 Part
        cout << "Press 1 for Exercise 1 Part 1&2\n";
        cout << "Press 2 for Exercise 1 Part 3\n";
        cin >> part;
        if (part==1){ //exercise 1 Step 1 and 2
            cout << "Input a Value :";
            int value;
            cout << "Input a Value: ";
            cin >> value;
            cout << "Value after plus 3,and the result times 9: ";
            int result = (value+3)*9;
            cout << result << endl;    
        }else if (part==2){ // exercise 1 Step 3
            cout << "Input a Celcius: ";
            float celcius;
            cin >> celcius;
            float fahrenheit = (celcius * 9 / 5 + 32);
            cout << "Fahrenheit: " << fahrenheit << endl;
        }else if (part != 1 && 2){
            std::cout << "Invalid choice! Please try again." << std::endl;
            e1();
        }
    }

    void e2() {
        int cm; //coursework marks
        int em; //examination marks
        int oa; //overall result
        int part; //choose what Exercise 2 Part
        cout << "Press 1 for Exercise 2 Part 1&2\n";
        cout << "Press 2 for Exercise 2 Part 3\n";
        cin >> part;
        if (part==1){ //exercise 2 Step 1 and 2
            int units;
            cin >> units;
            if (units <=0){ 
                cout << "Input error\n";
            }
            int total = units*5;
            cout << total << "\n";  
        }else if (part==2){ // exercise 2 Step 3
            cout << "Enter coursework marks:  ";
            cin >> cm;
            cout << "Enter examination marks: ";
            cin >> em;
            oa = cm*40/100+em*60/100;
            cout << "Your overall result is ";
            cout << oa << " ";
            if (cm >= 50 && em >= 50){     
                cout << "(Pass)";
            }else{ 
                cout << "(Fail)";
            }if (part != 1 && 2){
            std::cout << "Invalid choice! Please try again." << std::endl;
            e2();
            }          
        }
    }

    void e3() {
        cout << "Will be Release in Future\n";
    }
};

int main() {
    Library lib;
    int choice;

    while (true) {
        std::cout << "Press 1 for Exercise 1\nPress 2 for Exercise 2\nPress 3 for Exercise 3\n";
        std::cin >> choice; //choose what Exercise

        switch (choice) {
            case 1:
                lib.e1();
                break;
            case 2:
                lib.e2();
                break;
            case 3:
                lib.e3();
                break;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }
    return 0;
}
