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

int main(){

    EncryptedString str1;
    cout << "Empty string not encrypted: " << EncryptedString::str1.get() << endl;
    cout << "Empty string     encrypted: " << EncryptedString::getEncrypted() << endl << endl;

    str1.set("abcd");
    cout << "'abcd' not encrypted: " << EncryptedString::str1.get() << endl;
    cout << "'abcd'     encrypted: " << EncryptedString::str1.getEncrypted() << endl << endl;
}
