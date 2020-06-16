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

//Function to validate for paranthesis
bool isPara(char ch)
{
    if (ch=='(' || ch==')')
        return true;
    else
        return false;
}

//Function to calculate operation
int performOperation(int op1, int op2, char op)
{
    int ans;
    switch(op){
        case '+':
            ans = op2 + op1;
            break;
        case '-':
            ans = op2 - op1;
            break;
        case '*':
            ans = op2 * op1;
            break;
        case '/':
            ans = op2 / op1;
            break;
    }
    return ans;
}

bool zeroDivide(int op1, int op2, char x)
{
    bool correct = true;                      //Validation so user cannot divide by zero
    if (x == '/')
    {
        if (op1 == 0)
        {
            cout << "Cannot Divide by zero. ";
            correct = false;
            return correct;
        }
    }
}

int main(){
    char again;
    string exp;
    string buffer;
    int i,op1, op2, len, x;
    LinkedStack<int> s;

    do
    {
        do{
            //Get input from user
            cout << "Enter a Postfix Expression: ( e.g. 2 3 + 4 * )\n";
            getline(cin, exp);
        } while (inputValidation(exp)== false);

            //send input to get validated
            bool answer = inputValidation(exp);
            if (answer)
            {
            len = exp.length();
            for(i=0; i<len;i++) {
                if(exp[i]>='0' && exp[i]<='9'){
                    buffer = exp[i];
                    x = stoi(buffer);
                    s.push(x);
                }
                else if(isOperator(exp[i])){
                    op1 = s.peek();
                    s.pop();
                    op2 = s.peek();
                    s.pop();
                    bool correct = zeroDivide(op1, op2, exp[i]);
                    if (correct)
                    {
                        s.push(performOperation(op1, op2, exp[i]));
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if (!s.isEmpty())
            {
                cout << "Result: " << s.peek() << "\n";
                cout << '\n';
            }
            }


    }
    return 0;
}