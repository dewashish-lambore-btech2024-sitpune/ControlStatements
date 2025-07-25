#include<iostream>
#include<iomanip>
using namespace std;

void displayMenu() {
    cout << "\n--- CALCULATOR MENU ---" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main(){
    double num1, num2, result;
    int choice;
    char continueCalc;
    
    cout << "=== BASIC CALCULATOR ===" << endl;
    
    do {
        cout << "\nEnter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        
        displayMenu();
        cin >> choice;
        
        cout << fixed << setprecision(2);
        
        switch(choice){
            case 1:
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
                
            case 2:
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
                
            case 3:
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
                
            case 4:
                if(num2 != 0) {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
                
            case 5:
                cout << "Exiting calculator. Goodbye!" << endl;
