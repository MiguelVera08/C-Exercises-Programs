//Program opens a .txt file then prints contents backwards using recursion


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string printReverse(string);


int main(){

    ifstream filename;
    string str;
    string final;

    filename.open("amendments.txt");

    if(filename){
        while (getline(filename, str, '\n'))
        {
            final = final + str;
            final = final + "\n";

        }
        filename.close();
        string child = printReverse(final);

        ofstream blank("output.txt");
        blank << child;
        blank.close();
    }
    else
    {
    cout << "Cannot open file. \n";
    }
    return 0;
}

