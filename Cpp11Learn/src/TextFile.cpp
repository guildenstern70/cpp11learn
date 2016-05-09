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
        ifstream in(this->filepath);
        if (in)
        {
            ostringstream readcontent;
            readcontent << in.rdbuf() << ends;
            contents.append(readcontent.str());
        }
        else
        {
            success=false;
            this->errormsg="File does not exist.";
        }
    }
    catch (exception& e)
    {
        success=false;
        this->errormsg=e.what();
    }

    return success;


}

bool TextFile::writeTo(const string &contents, bool append)
{
    bool success = true;
    ios_base::openmode flag=ios::out;

    if (append)
        flag=ios::app;

    try
    {
        ofstream out(this->filepath,flag);
        out << contents;
    }
    catch (exception& e)
    {
        success = false;
        this->errormsg=string(e.what());
    }

    return success;

}

TextFile::TextFile(const string &filename)
{
    this->filepath = filename;
    this->errormsg = "";
}

bool TextFile::exists()
{
    ifstream f(this->filepath.c_str());
    return f.good();
}

bool TextFile::deleteFile()
{
    remove(this->filepath.c_str());
    if (this->exists())
    {
        this->errormsg = "Error deleting file " + this->filepath;
        return false;
    }
    return true;
}







