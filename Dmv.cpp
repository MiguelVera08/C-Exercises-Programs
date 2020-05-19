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