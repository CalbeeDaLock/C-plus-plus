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
            cout << "Input a Value: ";
            int value;
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
                cout << "(Pass)"<< endl;
            }else{ 
                cout << "(Fail)"<< endl;
            }if (part != 1 && part != 2){
            std::cout << "Invalid choice! Please try again." << endl;
            e2();
            }          
        }
    }

    void e3() {
        int x1; //first integer
        int x2; //second integer
        cout << "Enter the first integer:";
        cin >> x1;
        cout << "Enter the second integer:";
        cin >> x2;
        if (x1 == x2){
            cout << "The first integer is the same as the second integer!" << endl;
        }else{
            if (x1 < x2){
                cout << "The first integer is less than the second integer!" << endl;
            }else{
                cout << "The first integer is greater than the second integer!" << endl;
            }
        }
            
        
    }
    
    void e4() {
        int part;
        cout << "Press 1 for Exercise 4 Part 1(For loop)\n";
        cout << "Press 2 for Exercise 4 Part 2(While loop)\n";
        cout << "Press 3 for Exercise 4 Part 3(do-While loop)\n";
        cin >> part;
        if(part == 1){
            float x,sum,average,temp;
            cout << "Enter 10 number below,\n";
            sum = 0;
            for(x=1; x<=10; x++){
                cout << "Number_" << x << ":";
                cin >> temp;
                //cout << temp; For testing
                sum += temp ;
                //cout << sum; For testing
            }
            cout << "The sum of 10 input number is:" << sum << endl;
            average = sum/10;
            cout << "The average of 10 input number is:" << average << endl;
        }if(part == 2){
            float x,sum,average,temp;
            cout << "Enter 10 number below,\n";
            sum = 0;
            x = 1;
            while(x<=10){
                cout << "Number_" << x << ":";
                x++;
                cin >> temp;
                //cout << temp; For testing
                sum += temp;
                //cout << sum; For testing
            }
            cout << "The sum of 10 input number is:" << sum << endl;
            average = sum/10;
            cout << "The average of 10 input number is:" << average << endl;
        }if(part == 3){
            float x,sum,average,temp;
            cout << "Enter 10 number below,\n";
            sum = 0;
            x = 1;
            do{
               cout << "Number_" << x << ":";
                x++;
                cin >> temp;
                //cout << temp; For testing
                sum += temp;
                //cout << sum; For testing
            }while(x<=10);
            cout << "The sum of 10 input number is:" << sum << endl;
            average = sum/10;
            cout << "The average of 10 input number is:" << average << endl;
        }if (part != 1 && part != 2 && part != 3){
            cout << "Invalid choice! Please try again." << endl;
            e4();
        }
    }
};

int main() {
    Library lib;
    int choice;

    while (true) {
        cout << "Press 1 for Exercise 1\nPress 2 for Exercise 2\nPress 3 for Exercise 3\nPress 4 for Exercise 4\n";
        cin >> choice; //choose what Exercise

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
            case 4:
                lib.e4();
                break;
            default:
                cout << "Invalid choice! Please try again." << std::endl;
                break;
        }
    }
    return 0;
}
