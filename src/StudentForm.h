#pragma once

#include <map>
#include <string>
#include <memory>

#include "StudentClass.h"

typedef std::map<char, std::shared_ptr<StudentClass>> StudentClassMap;

class StudentForm
{

public:

	StudentForm() = default;

	StudentForm(int formNumber);	

	void AddStudentClass(char className);

	bool StudentClassExist(char className);

	const StudentClassMap &GetStudentClasses();

private:

					

private:

	int m_formNumber;

	StudentClassMap m_studentClassMap;

};
