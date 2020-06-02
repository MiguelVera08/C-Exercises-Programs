//Program takes a string then changes the characters to the next character on ASCII table

#include <iostream>
#include <string>
#include <cctype>
#include "EncryptedString.h"
using namespace std;


EncryptedString::EncryptedString():myString(string())
{
}

EncryptedString::EncryptedString(string aString)
{
    return set(aString);
}
