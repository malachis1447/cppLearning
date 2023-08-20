/* 
BasicCalculator.cpp
Kain M. Snyder
Mon Aug 14 2023 0357 MDT

Calculator using functions, case, user input, etc.
*/

#include <iostream>
#include <cmath>

int Operator;
double Num1;
double Num2;
double Answer;

void AdditionFunc() {
    Answer = Num1 + Num2;
}
void SubtractionFunc() {
    Answer = Num1 - Num2;
}
void MultiplicationFunc() {
    Answer = Num1 * Num2;
}
void DivisionFunc() {
    Answer = Num1 / Num2;
}
void ExponentFunc() {
    Answer = pow(Num1, Num2);
}
void SqrtFunc() {
    Answer = sqrt(Num1);
}

int main() {

    std::cout << "This is a basic calculator. \n";
    std::cout << "Please ensure you're typing the number of the operation you'd like to perform: \n";
    std::cout << "[1]: Addition\n [2]: Subtraction\n [3]: Multiplication\n [4]: Division\n [5]: Exponent\n [6]: Square Root\n";
    std::cout << "\n \n Please choose an option from the list above: ";
    std::cin >> Operator;
    std::cout << "\n \n Please enter the base number in the equation: ";
    std::cin >> Num1;
    std::cout << "\n Please enter the secondary number in the equation (if none, leave blank): ";
    std::cin >> Num2;

    switch (Operator) {

        case 1:
        AdditionFunc();
        break;

        case 2:
        SubtractionFunc();
        break;
        
        case 3:
        MultiplicationFunc();
        break;

        case 4:
        DivisionFunc();
        break;

        case 5:
        ExponentFunc();
        break;

        case 6:
        SqrtFunc();
        break;
    }

    std::cout << "The answer is: ";
    std::cout << Answer;
    return 0;

}

