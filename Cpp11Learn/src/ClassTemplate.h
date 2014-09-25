//============================================================================
// Name        : ClassTemplate.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#ifndef CLASSTEMPLATE_H_
#define CLASSTEMPLATE_H_

#include <string>

enum Name { Alessio, Giovanni, Enzo, Giuliana, Daniela, Eva };
enum Surname { Rossi, Rosetti, Verdi, Lottoni, Pini, Abete, Dezo };

class ClassTemplate
{
public:
	ClassTemplate() = default;
	ClassTemplate(const std::string& name, const std::string& surname);
	std::string getName() const { return this->cname; }
	std::string getSurname() const { return this->csurname; }
	const std::string toString() const;
	const std::string currentDateTime() const;
	virtual ~ClassTemplate();
private:
	std::string cname;
	std::string csurname;
	std::string ccreated;
	Name getRandomName() const;
	Surname getRandomSurname() const;
};

#endif /* CLASSTEMPLATE_H_ */
