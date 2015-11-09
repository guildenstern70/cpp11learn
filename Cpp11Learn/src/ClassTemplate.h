//============================================================================
// Name        : ClassTemplate.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2015
// Description : Cpp11Learn
//============================================================================

#ifndef CLASS_TEMPLATE_H_
#define CLASS_TEMPLATE_H_

#include <string>

class ClassTemplate
{
public:
	ClassTemplate();
	ClassTemplate(const std::string& name, const std::string& surname);
	const std::string toString() const;
	const std::string currentDateTime() const;
	virtual ~ClassTemplate() {};
private:
	std::string cname;
	std::string csurname;
	std::string ccreated;
};

#endif /* CLASSTEMPLATE_H_ */
