//Integer numbers to english program
#include <string>
#include <iostream>

using namespace std;

string num_to_text[] = { 
    "", "one", "two", "three", "four", "five", 
    "six", "seven", "eight", "nine", "ten", 
    "eleven", "twelve", "thirteen", "fourteen", 
    "fifteen", "sixteen", "seventeen", "eighteen", 
    "nineteen" };

string tens_to_text[] = { "", "", "twenty", "thirty", 
    "forty", "fifty", "sixty", "seventy", "eighty", 
    "ninety" };

string power_to_text[] = { "", "thousand", "million", "billion" };

string padIfNeeded (string ans)
{
        if ( ans == "" )
        {
                return "";
        }
        return " " + ans;
}

string translateHundred (int hundred_chunk)
{
        // handle special cases in the teens
        if ( hundred_chunk < 20 ) {
                return num_to_text[ hundred_chunk ];
        }
        int tens = hundred_chunk / 10;
        int ones = hundred_chunk % 10;
        return tens_to_text[ tens ] + padIfNeeded( num_to_text[ ones ] );
}
