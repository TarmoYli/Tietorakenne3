
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Courses.h"

int main()
{
    std::ifstream readFile("BigData.csv");
    std::vector<Courses> courses_list;
    if (readFile.is_open())
    {
        std::string line;
        while (std::getline(readFile, line))
        {

            std::vector<std::string> parts;
            size_t pos = 0;
            while ((pos = line.find(';')) != std::string::npos)
            {
                parts.push_back(line.substr(0, pos));
                line.erase(0, pos + 1);
            }
            parts.push_back(line);

            
            if (parts.size() == 8)
            {
                
                Courses course(parts[0], parts[1], parts[2], parts[3], 
                                parts[4], parts[5], parts[6], parts[7]);

                courses_list.push_back(course);
            }
            else
            {
                std::cout << "Virheellinen rivi: " << line << std::endl;
            }
        }
        readFile.close();
    }
    else
    {
        std::cout << "Virhe tiedoston avaamisessa." << std::endl;
    }

    courses_list[40].printCourse();
}


/*
Tee ohjelma, joka lukee tiedoston "BigData.csv" muistiin taulukkoon tai listaan.
Tämän jälkeen ohjelma kysyy kurssikoodin ja hakee taulukosta/listasta opintojakson nimen.
Voit käyttää täydellistä hakua tai puolitushakua algoritmina.
Puolitushaun yhteydessä joudut tietenkin järjestämään datan.

Opinto	Tyyppi	Toteutus	Alkupvm	Loppupvm	Nimi	Vastuutoimipiste	Vastuuohjelma
*/