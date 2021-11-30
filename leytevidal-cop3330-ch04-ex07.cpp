#include "leytevidal-cop3330-ch04-ex07.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string num1Input, num2Input;
    
    cout << "Enter two numbers for the operation: ";
    cin >> num1Input >> num2Input;
    
    int num1 = inString(num1Input);
    int num2 = inString(num2Input);
    
    string symbol;
    cout << "Enter a operand to use: ";
    cin >> symbol;
    
    math(num1, num2, symbol);
    
    return 0;
}

int inString(string input) 
{
    //baseline; cant use 0 since thats a valid input
    int inNum = -1;
    
    //Clarify what user is inputting into the code
    if (input == "zero" || input == "0") inNum = 0;
    if (input == "one" || input == "1") inNum = 1;
    if (input == "two" || input == "2") inNum = 2;
    if (input == "three" || input == "3") inNum = 3;
    if (input == "four" || input == "4") inNum = 4;
    if (input == "five" || input == "5") inNum = 5;
    if (input == "six" || input == "6") inNum = 6;
    if (input == "seven" || input == "7") inNum = 7;
    if (input == "eight" || input == "8") inNum = 8;
    if (input == "nine" || input == "9") inNum = 9;
    
    if (inNum == -1 && input.length() == 1) 
    {
        //Check that its only one number
        stringstream numStr(input);
        numStr >> inNum;
    }
    else
    {
        //Error if not a valid input
        cout << "Invalid Input: Please use a number zero through nine.";
    }
    
    return inNum;
}

//actual operations
void math(int num1, int num2, string symbol)
{
    double ansr = 0;
    
    string symbolActual = "";

    if (symbol == "+") 
    {
        ansr = num1 + num2;
        symbolActual = "sum";
    }
    
    if (symbol == "-") 
    {
        ansr = num1 - num2;
        symbolActual = "difference";
    }
        
    if (symbol == "*") 
    {
        ansr = num1 * num2;
        symbolActual = "product";
    }
        
    if (symbol == "/") 
    {
        ansr = num1 / num2;
        symbolActual = "quotient";
    }
    
    cout << "The " << symbolActual << " of " << num1 << " and " << num2 << " is " << ansr << ".";
}
