//Program using a class called Population to determine the birth and death rates of location the user inputs

#include <iostream>
#include <iomanip>
using namespace std;

class Population{

    //Population and the annual number of births and deaths.
    private:
        long population;
        double numBirths;
        double numDeaths;

    public:
        //constructors
        Pop();
        Pop(long, double, double);

    //Mutator functions
    void setPopulation(long p);
    void setBirths(double b);
    void setDeaths(double d);

    //Accessor functions
    long getPopulation()
    {
        return population;
    }
    double getBirthRate()
    {
        return numBirths/population;
    }
    double getDeathRate()
    {
        return numDeaths/population;
    }
};

Population::Pop()
{
    population = 2;
    numBirths = 0;
    numDeaths = 0;
}

Population::Pop(long p, double b, double d)
{
    setPopulation(p);
    setBirths(b);
    setDeaths(d);
}

void Population::setPopulation(long p)
{
    if (p >= 1)
        population = p;
    else
        population = 0;
}

void Population::setBirths(double b)
{
    if (b >= 0)
        numBirths = b;
    else
        numBirths = 0;
}

void Population::setDeaths(double d)
{
    if (d >= 0)
        numDeaths = d;
    else
        numDeaths = 0;
}

int main(){

    //Create population object
    Population town;

    //Create variables
    long numPop;
    double numBirths;
    double numDeaths;

    //Get population from user
    cout << "Enter total population: ";
    cin >> numPop;

    while (numPop < 1)
    {
        cout << "Number must be positive re-enter: ";
        cin >> numPop;
        cout << "\n";
    }
}
