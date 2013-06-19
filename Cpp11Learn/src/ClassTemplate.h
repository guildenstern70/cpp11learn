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

class ClassTemplate
{
public:
	ClassTemplate() = default;
	ClassTemplate(const string& name, const string& surname);
	string getName() const { return this->cname; }
	string getSurname() const { return this->csurname; }
	string toString() const;
	virtual ~ClassTemplate() {};
private:
	string cname;
	string csurname;
};

#endif /* CLASSTEMPLATE_H_ */
