//Program calculates average scores based on the inputs by user

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void selectionSort (double *, int);
void showArray (double *, int);
void scoreAverage (double, int);

int main(){

    double *scores = nullptr,   //Dynamically allocate an array
    total = 0.0,  //Accumulator
    average;      //Holds average scores
    int numScores;    //Holds number of scores

    //Get number of scores from user
    cout << "Enter the number of Scores:  ";
    cin >> numScores;
    cout << "\n";

    //Dynamically allocate an array large enough to hold the scores
    scores = new double[numScores];

    //Get the individual scores from user
    cout << "Enter the test scores. \n";

    for (int count = 0; count < numScores; count++)
    {
        cout << "Test Score " << (count +1) << ": ";
        cin >> *(scores + count);

        //Validate input from user
        while (*(scores + count) < 0)
        {
            cout <<"User must enter positive scores: ";
            cin >> scores[count];
        }
    }
    //Calculate the total of scores
    for (int count = 0; count < numScores; count++)
    {
        total = total + *(scores+count);
    }
    //Display the unsorted scores
    cout << "\n";
    cout << "Scores entered: \n";
    showArray(scores, numScores);
    cout << "\n";

    //Dispaly the scores in array ptr
    selectionSort(scores, numScores);

    //Display sorted scores
    cout << "The sorted scores: \n";
    showArray(scores, numScores);
    cout << "\n";

    //Call average function

    scoreAverage(total, numScores);

    //Free dynamically allocated memory}
    delete scores;
    scores = nullptr;
    return 0;
}

//Function sorts the scores in ascending order
void selectionSort(double *scores, int size){

    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size-1); startScan++){
        minIndex = startScan;
        minValue = *(scores + startScan);

        for (int index =startScan + 1; index < size; index++)
        {
            if (*(scores+index) < minValue)
            {
                minValue = *(scores + index);
                minIndex = index;
            }
        }
        *(scores+minIndex) = *(scores+startScan);
        *(scores+startScan) = minValue;
    }
}

//Function displays the scores inputed by user
void showArray(double *scores, int size)
{
    for (int count = 0; count < size; count++)
        cout << *(scores + count) << " ";
    cout << endl;
}

//Function calculates average of scores inputed
void scoreAverage(double total, int numScores)
{
    double average;

    //Calculate average
    average = total / numScores;

    //Display the average score
    cout << fixed << showpoint << setprecision(1);;
    cout << "The average is: " << average << endl;

}