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
            int indexInLine = 0;
            while ((indexInLine = line.find(';')) != std::string::npos)
            {
                parts.push_back(line.substr(0, indexInLine));
                line.erase(0, indexInLine + 1);
            }
            parts.push_back(line);

            Courses course(parts[0], parts[1], parts[2], parts[3],
                parts[4], parts[5], parts[6], parts[7]);

            allCourses.push_back(course);

        }
        readFile.close();
    }
    else
    {
        std::cout << "Virhe tiedoston avaamisessa." << std::endl;
    }
}
