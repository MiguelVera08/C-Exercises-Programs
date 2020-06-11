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