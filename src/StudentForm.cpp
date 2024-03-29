#include "StudentForm.h"

StudentForm::StudentForm(int formNumber)
	:	m_formNumber	(formNumber)
{}

void StudentForm::AddStudentClass(char className)
{

	m_studentClassMap[className] = std::make_shared<StudentClass>(m_formNumber, className);

}

bool StudentForm::StudentClassExist(char className)
{

	if (m_studentClassMap.find(className) == m_studentClassMap.end())
	{

		return false;

	}

	return true;

}

std::shared_ptr<StudentClass> StudentForm::GetStudentClass(char className)
{

	return m_studentClassMap[className];

}

const StudentClassMap &StudentForm::GetStudentClasses()
{

	return m_studentClassMap;

}
