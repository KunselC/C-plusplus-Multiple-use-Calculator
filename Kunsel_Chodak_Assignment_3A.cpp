#include <iostream>
#include <cmath>
using namespace std;

double num1, num2;
char oper;

double sum(int, int);

int main()
{
    cout << "Welcome to Kunsel's FunCalculator" << endl;

     while(true) {
      cout << "Enter a first number: " << endl;
      cin >> num1;

      cout << "Enter a second number: " << endl;
      cin >> num2;

      cout << "Enter a operation: " << endl;
      cin >> oper;

      switch (oper) {
        case '+':
          cout << num1 + num2 << endl;
          break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
            }
            else {
                cout << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
        }
      }
      return 0;
}


//To do modulo with doubles, write fmod(firstNumber, secondNumber)