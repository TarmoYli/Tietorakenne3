#include "FromCsv.h"

void FromCsv::readFile(std::string path)
{
	std::ifstream readFile(path);
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

                allCourses.push_back(course);
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
}
