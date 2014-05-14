/*
 * ClassTemplate.h
 *
 *  Created on: Jun 19, 2013
 *      Author: alessio
 */

#ifndef CLASSTEMPLATE_H_
#define CLASSTEMPLATE_H_

#include <string>

using namespace std;

enum Name { Alessio, Giovanni, Enzo, Giuliana, Daniela, Eva };
enum Surname { Rossi, Rosetti, Verdi, Lottoni, Pini, Abete, Dezo };

class ClassTemplate
{
public:
	ClassTemplate() = default;
	ClassTemplate(const string& name, const string& surname);
	string getName() const { return this->cname; }
	string getSurname() const { return this->csurname; }
	const string toString() const;
	const string currentDateTime() const;
	virtual ~ClassTemplate() {};
private:
	string cname;
	string csurname;
	string ccreated;
	Name getRandomName() const;
	Surname getRandomSurname() const;
};

#endif /* CLASSTEMPLATE_H_ */
