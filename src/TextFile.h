//
// Created by Alessio Saltarin on 09/05/16.
//

#ifndef CPP11LEARN_TEXTFILE_H
#define CPP11LEARN_TEXTFILE_H


#include <string>

class TextFile
{

private:
    std::string filePath;
    std::string errorMessage;

public:
    //! Constructor
    /*!
      \param fileName Full path to file
    */
    explicit TextFile(const std::string& fileName);

    //! Read from file
    /*!
      \param contents String containing file contents
      \return true, if the operation was successful
    */
    bool readFrom(std::string& contents);

    //! Write text into file
    /*!
      \param contents String containing file contents
      \param append True if you want to append rather than create
      \return true, if the operation was successful
    */
    bool writeTo(const std::string& fileName, bool append=false);

    //! Delete file
    /*!
      \return true, if the operation was successful
    */
    bool deleteFile();

    //! Check if file exists
    /*!
      \return true, if the file exists
    */
    bool exists();

    //! Get the latest operation error message
    /*!
      \return Error message
    */
    std::string getErrorMessage() const { return this->errorMessage; }
};


#endif //CPP11LEARN_TEXTFILES_H
