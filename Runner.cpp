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

        cout << fixed << showpoint << setprecision(2);

        //Determine the order the runners came in
        //Order: 1st runner, 2nd runner, 3rd runner
        if((time1 < time2) && (time1 < time3) && (time2 < time3))
        {
            cout << "1st place: "<< runner1 << "\t\t\t" << time1 << endl;
            cout << "2nd place: "<< runner2 << "\t\t\t" << time2 << endl;
            cout << "3rd place: "<< runner3 << "\t\t\t" << time3 << endl;
        }
        //Order: 1st runner, 3rd runner, 2nd runner
        else if((time1 < time2) && (time1 < time3) && (time2 > time3))
        {
            cout << "1st place: "<< runner1 << "\t\t\t" << time1 << endl;
            cout << "2nd place: "<< runner3 << "\t\t\t" << time3 << endl;
            cout << "3rd place: "<< runner2 << "\t\t\t" << time2 << endl;
        }

        //Order: 2nd runner, 1st runner, 3rd runner
        if((time2 < time1) && (time2 < time3) && (time1 < time3))
        {
            cout << "1st place: "<< runner2 << "\t\t\t" << time2 << endl;
            cout << "2nd place: "<< runner1 << "\t\t\t" << time1 << endl;
            cout << "3rd place: "<< runner3 << "\t\t\t" << time3 << endl;
        }
    }
}

