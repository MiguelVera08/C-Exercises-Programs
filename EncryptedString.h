#ifndef ENCRYPTEDSTRING_H
#define ENCRYPTEDSTRING_H


class EncryptedString{
    public:
    EncryptedString();
    EncryptedString(string astring);
    void set(string str);
    string get() const;
    string getEncrypted() const;
private:
    string myString;
};

#include "EncryptedString.cpp"
#endif
