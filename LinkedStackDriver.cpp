//Program will get operations and numbers form user and calculate outcomes using a linked stack

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cctype>


#include "LinkedStack.h"

using namespace std;

//Function Prototypes
bool inputValidation(string &);
bool isOperator(char);
bool isPara(char);
bool zeroDivide(int,int, char);

//Function to validate input from user
bool inputValidation(string &exp){

    bool answer = false;
    int len = exp.length();
    int operate = 0;
    int operand = 0;
    int special = 0;

    for (int x = 0; x < len; x++){
        if (isOperator(exp[x]))                     //Counter to track the number of operaters in input
        {
            operate = operate + 1;
            answer = true;
        }
        else if (isdigit(exp[x]))                  //Counter to track the number of integers in input
        {
            operand = operand + 1;
            answer = true;
        }
        else if (isspace(exp[x]))
        {
            exp.erase(exp.begin()+(x));	           //Removes spaces from string
            len -= 1;
            x -= 1;
            answer = true;
        }
        else if (isPara(exp[x]))
        {
            special = special + 1;
            answer = true;
        }
    }
    if (isOperator(exp[0]))
    {
        cout << "Malformed Expression, Invalid Postfix: ";
        cout << '\n';
        answer = false;
    }
    else if (isOperator(exp[1]))
    {
        cout << "Malformed Expression, Invalid Postfix: ";
        cout << '\n';
        answer = false;
    }
    else if(isdigit(exp.back()))
    {
        cout << "Malformed Expression, End cannot contain integer";
        cout << '\n';
        answer = false;
    }
    else if(operand != (operate + 1))
    {
        cout << "Malformed Expression, Invalid Operator Detected";
        cout << '\n';
        answer = false;
    }
    else if (special)
    {
        cout << "Malformed Expression, Invalid Operator Detected";
        cout << '\n';
        answer = false;
    }
    return answer;
}

//Function to validate operator
bool isOperator(char ch)
{
    if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
        return true;
    else
        return false;
}