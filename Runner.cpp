//Program That recieves three different runner times then determines the winner

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //Variables
    string runner1, runner2, runner3;
    float time1, time2, time3;

    cout << "Name of Runner 1: ";
    getline(cin,runner1);
    cout << "Enter the runners time: ";
    cin >> time1;

    cout << "\nName of Runner 2: ";
    cin.ignore();

    getline(cin, runner2);
    cout << "Enter the runners time: ";
    cin >> time2;

    cout << "\nName of Runner 3: ";
    cin.ignore();

    getline(cin, runner3);
    cout << "Enter the runners time: ";
    cin >> time3;
    cout << endl;


    if (time1 < 0 || time2 <0 || time3 < 0) {
        cout << "Running times cannot be negative. \n";
    }else{
        //Display resualts
        cout << "Race results \n";
        cout << "------------ \n\n";
    }
}

