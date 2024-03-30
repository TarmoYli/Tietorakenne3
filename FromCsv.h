#pragma once
#ifndef FROMCSV
#define FROMCSV

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Courses.h"

class FromCsv
{
public:
	std::vector<Courses> allCourses;
	void readFile(std::string path);
};


#endif // !FROMCSV