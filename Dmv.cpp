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