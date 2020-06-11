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
}