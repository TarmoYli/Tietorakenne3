
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Courses.h"
#include "FromCsv.h"

int main()
{
    FromCsv files;
    files.readFile("BigData.csv");

    // esim koodi: ME130304 
    std::string Code;
    std::cout << "Anna kurssikoodi: ";
    std::cin >> Code;
    
    bool found = false;
    for (auto& course : files.allCourses) {
        if (course.Opinto == Code) {
            course.printCourse();
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "kurssia ei löytynyt annetulla koodilla." << std::endl;
    }
}