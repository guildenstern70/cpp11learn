//
// Created by Alessio Saltarin on 09/05/16.
//

#ifndef CPP11LEARN_TEXTFILE_H
#define CPP11LEARN_TEXTFILE_H


#include <string>

using namespace std;

class TextFile
{

private:
    string filepath;
    string errormsg;

public:
    TextFile(const string& filename);
    bool readFrom(string& contents);
    bool writeTo(const string& filename, bool append=false);
    bool deleteFile();
    bool exists();
    string getErrorMessage() const { return this->errormsg; }
};


#endif //CPP11LEARN_TEXTFILES_H
