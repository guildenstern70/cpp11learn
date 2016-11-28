//
// Created by Alessio Saltarin on 09/05/16.
//

#include "TextFile.h"
#include <fstream>
#include <sstream>

using namespace std;

bool TextFile::readFrom(string& contents)
{
    bool success = true;
    try
    {
        ifstream in(this->filePath);
        if (in)
        {
            ostringstream readcontent;
            readcontent << in.rdbuf() << ends;
            contents.append(readcontent.str());
        }
        else
        {
            success=false;
            this->errorMessage="File does not exist.";
        }
    }
    catch (exception& e)
    {
        success=false;
        this->errorMessage=e.what();
    }

    return success;


}

bool TextFile::writeTo(const string &fileName, bool append)
{
    bool success = true;
    ios_base::openmode flag=ios::out;

    if (append)
        flag=ios::app;

    try
    {
        ofstream out(this->filePath,flag);
        out << fileName;
    }
    catch (exception& e)
    {
        success = false;
        this->errorMessage=string(e.what());
    }

    return success;

}

TextFile::TextFile(const string &fileName)
{
    this->filePath = fileName;
    this->errorMessage = "";
}

bool TextFile::exists()
{
    ifstream f(this->filePath.c_str());
    return f.good();
}

bool TextFile::deleteFile()
{
    remove(this->filePath.c_str());
    if (this->exists())
    {
        this->errorMessage = "Error deleting file " + this->filePath;
        return false;
    }
    return true;
}







