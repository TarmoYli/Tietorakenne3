#include "Courses.h"


Courses::Courses(std::string aOpinto, std::string aTyyppi, std::string aToteutus,
	std::string aAlkupvm, std::string aLoppupvm, std::string aNimi, std::string aVastuutoimipiste, std::string aVastuuohjelma) :
	Opinto(aOpinto), Tyyppi(aTyyppi), Toteutus(aToteutus), Alkupvm(aAlkupvm), Loppupvm(aLoppupvm), Nimi(aNimi), Vastuutoimipiste(aVastuutoimipiste), Vastuuohjelma(aVastuuohjelma){}

void Courses::printCourse()
{
	std::cout << "Alkupvm: " << this->Alkupvm << "\n";
	std::cout << "Loppupvm: " << this->Loppupvm << "\n";
	std::cout << "Nimi: " << this->Nimi << "\n";
	std::cout << "Opintokoodi: " << this->Opinto << "\n";
	std::cout << "Toeteutus: " << this->Toteutus << "\n";
	std::cout << "Tyyppi: " << this->Tyyppi << "\n";
	std::cout << "Vastuuohjelma: " << this->Vastuuohjelma << "\n";
	std::cout << "Vastuutoimipiste: " << this->Vastuutoimipiste << "\n";
}




