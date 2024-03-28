
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream readFile("BigData.csv");
    if (readFile.is_open())
    {
        std::string line;
        while (std::getline(readFile,line,';')
    }
}


/*
Tee ohjelma, joka lukee tiedoston "BigData.csv" muistiin taulukkoon tai listaan.
T‰m‰n j‰lkeen ohjelma kysyy kurssikoodin ja hakee taulukosta/listasta opintojakson nimen.
Voit k‰ytt‰‰ t‰ydellist‰ hakua tai puolitushakua algoritmina.
Puolitushaun yhteydess‰ joudut tietenkin j‰rjest‰m‰‰n datan.

Opinto	Tyyppi	Toteutus	Alkupvm	Loppupvm	Nimi	Vastuutoimipiste	Vastuuohjelma
*/