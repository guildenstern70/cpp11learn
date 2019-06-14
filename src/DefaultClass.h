//============================================================================
// Name        : DefaultClass.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#ifndef CLASS_TEMPLATE_H_
#define CLASS_TEMPLATE_H_

#include <string>

using uint = unsigned int;

class DefaultClass
{
public:
	DefaultClass();
	DefaultClass(const std::string& name, const std::string& surname);
	const std::string toString() const;
	void currentDateTime(char* dateTime);
    void setAge(uint age) { this->age = age; }
    uint getAge() { return this->age; }
	virtual ~DefaultClass() = default;;
private:
	std::string firstName;
	std::string lastName;
	uint age;
	std::string whenCreated;
};

#endif /* CLASSTEMPLATE_H_ */
