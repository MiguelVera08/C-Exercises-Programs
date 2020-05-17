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
