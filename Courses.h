#pragma once

#ifndef COURSES
#define COURSES

#include <iostream>
#include <string>

class Courses
{
public:
	std::string Opinto;
	std::string Tyyppi;
	std::string Toteutus;
	std::string Alkupvm;
	std::string Loppupvm;
	std::string Nimi;
	std::string Vastuutoimipiste;
	std::string Vastuuohjelma;
	Courses(std::string Opinto, std::string Tyyppi, std::string Toteutus,
		std::string Alkupvm, std::string Loppupvm, std::string Nimi,
		std::string Vastuutoimipiste, std::string Vastuuohjelma);
	void printCourse();
};


#endif // !COURSES