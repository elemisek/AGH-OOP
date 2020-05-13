#pragma once
#include "NumerID.h"
#include <iostream>
#include <string>
#include <cstring>



class Osoba
{
private:
	std::string mName;
public:
	Osoba(std::string name) : mName(name) {}
	std::string getName() const { return mName; }
	virtual std::string type() const = 0;
};

std::ostream& operator<<(std::ostream& os, const Osoba& osoba)
{
	return os << osoba.getName() << " - " << osoba.type();
}


class Pracownik : virtual public Osoba, public NumerID
{

public:
	Pracownik(std::string name, NumerID id) : Osoba(name), NumerID(id) {}

	std::string type() const override { return "pracownik"; }
	
};


class Student : virtual public Osoba, public NumerID
{

public:
	Student(std::string name, NumerID id) : Osoba(name), NumerID(id) {}

	std::string type() const override { return "student (id <" + numID() + ">)"; }

};


class Dydaktyk : public Pracownik
{

public:
	Dydaktyk(std::string name, NumerID id) : Osoba(name), Pracownik(name, id) {}

	std::string type() const override { return "dydaktyk"; }
};

class Wozny : public Pracownik
{

public:
	Wozny(std::string name) : Osoba(name), Pracownik(name, 0) {}

	std::string type() const override { return "wozny"; }

};

class Doktorant : public Dydaktyk, public Student
{

public:
	Doktorant(std::string name, NumerID idStudent, NumerID idPracownik) : Osoba(name), Student(name, idStudent), Dydaktyk(name, idPracownik) {}

	std::string type() const override { return "doktorant"; }

	std::string numID_student() { return Student::numID(); }
	std::string numID_dydaktyk() { return Dydaktyk::numID(); }
};