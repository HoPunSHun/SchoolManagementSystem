#pragma once

#include "Student.h"

#include <string>
#include <memory>
#include <map>

typedef std::map<std::string, std::shared_ptr<Student>> StudentNameMap;
typedef std::map<char, std::shared_ptr<Student>> StudentNumberMap;

class Class
{

public:

	Class() = default;

	Class(int form, char name);

private:

	int m_form;
	char m_name;

	StudentNameMap m_studentNameMap;
	StudentNumberMap m_studentNumMap;

};
