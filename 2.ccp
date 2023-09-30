#include <iostream>
using namespace std;
int main() {
    int cm;
    int em;
    int oa;
    cout << "Press 1 for Exercise 2 Part1&2\n";
    cout << "Press 2 for Exercise 2 Part3&beyond\n";
    int part;
    cin >> part;
    if (part==1){ 
        int units;
        cin >> units;
        if (units <=0){ 
            cout << "Input error\n";
        }
        int total = units*5;
        cout << total;  
        return 0;
        exit(0);
    }else if (part==2){ 
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
            return 0;
            exit(0);
        }          
    }
}
