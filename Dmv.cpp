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

//Function displays whether user failed or passed test and total number wrong/correct.

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

    if (total >= 15)
    {
        cout << "\nYou passed the exam"<< endl;
        cout << '\n';
    }else{
        cout << "You failed the exam"<< endl;
        cout << '\n';
    }

    cout << "Total correct: " << correct << "\nTotal wrong: " << wrong << endl;
    cout << '\n';

    //Count total number of questions wrong
    cout << "Incorrect questions: ";
    for (int i = 0; i < 20; i++)
    {
        if (test[i] != answers[i])
        {
            cout << i + 1 << " ";
        }
    }

    cout << '\n';
}

int main(){
    //Determine the correct exam answers
    string answers[20]= {"B","D","A","A","C","A","B","A","C","D","B","C","D","A","D","C","C","B","D","A"};

    //Create TestGrader class object
    TestGrader test;

    //Call set key function
    test.setKey(answers);

    string userTest[20];

    char choice = 'Y';

    //Get answers from user
    do {
        for (int i = 0; i < 20; i++) //use loop to go through questions 1-20
        {
            cout << "Enter answer for " << i + 1 << ":";
            cin >> userTest[i];


            while (userTest[i] > "D" || userTest[i] < "A") {
                cout << "Enter choice between A-D: ";
                cin >> userTest[i];
            }
        }
    }
    while(choice == 'Y');

    return 0;
}