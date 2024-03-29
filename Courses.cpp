#include "Courses.h"


Courses::Courses(std::string aOpinto, std::string aTyyppi, std::string aToteutus,
	std::string aAlkupvm, std::string aLoppupvm, std::string aNimi, std::string aVastuutoimipiste, std::string aVastuuohjelma) :
	Opinto(aOpinto), Tyyppi(aTyyppi), Toteutus(aToteutus), Alkupvm(aAlkupvm), Loppupvm(aLoppupvm), Nimi(aNimi), Vastuutoimipiste(aVastuutoimipiste), Vastuuohjelma(aVastuuohjelma){}

void Courses::printCourse()
{
	std::cout << this->Alkupvm << "\n";
	std::cout << this->Loppupvm << "\n";
	std::cout << this->Nimi << "\n";
	std::cout << this->Opinto << "\n";
	std::cout << this->Toteutus << "\n";
	std::cout << this->Tyyppi << "\n";
	std::cout << this->Vastuuohjelma << "\n";
	std::cout << this->Vastuutoimipiste << "\n";
}




