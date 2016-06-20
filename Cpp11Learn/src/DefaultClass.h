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

class DefaultClass
{
public:
	DefaultClass();
	DefaultClass(const std::string& name, const std::string& surname);
	const std::string toString() const;
	void currentDateTime(char* dateTime);
	virtual ~DefaultClass() {};
private:
	std::string cname;
	std::string csurname;
	std::string ccreated;
};

#endif /* CLASSTEMPLATE_H_ */
