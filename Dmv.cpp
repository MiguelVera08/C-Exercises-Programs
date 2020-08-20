//Program grades the answers of a DMV test inputed by the user then determines if user passed or failed

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

class TestGrader{

    private: string answers[20];

    public:
        void setKey(string []);
        void grade(string []);
};

//Function stores the correct answers
void TestGrader::setKey(string correct[])
{
    for (int i = 0; i < 20; i++)
    {
        answers[i] = correct[i];
    }
}

//Function displays wether user failed or passed test and total number wrong/correct.

void TestGrader::grade(string test[]){

    int correct = 0;
    int wrong = 0;
    int total = 0;

    for (int i=0; i<20; i++)
    {
        if (test[i] == answers[i])
        {
            correct = correct + 1;
            total = total + 1;
        }
        else if (test[i] != answers[i])
        {
            wrong = wrong + 1;
        }
    }
}