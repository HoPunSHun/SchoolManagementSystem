#include "StudentClass.h"

StudentClass::StudentClass(int form, char name)
	:	m_form	(form),
		m_name	(name)
{}

void StudentClass::AddStudent(const std::string &name, int number, const std::string &id)
{

	std::shared_ptr<Student> newStudent = std::make_shared<Student>(name, number, id);

	m_studentNameMap[name] = newStudent;

	m_studentNumMap[number] = newStudent;

}

const StudentNameMap &StudentClass::GetStudentNameMap() const
{

	return m_studentNameMap;

}

const StudentNumMap &StudentClass::GetStudentNumMap() const
{

	return m_studentNumMap;

}

bool StudentClass::StudentExist(const std::string &name) const
{

	if (m_studentNameMap.find(name) == m_studentNameMap.end())
	{

		return false;

	}

	return true;

}

bool StudentClass::StudentExist(int number) const
{

	if (m_studentNumMap.find(number) == m_studentNumMap.end())
	{

		return false;

	}

	return true;
}

std::shared_ptr<Student> StudentClass::GetStudent(const std::string &name)
{

	return m_studentNameMap[name];

}

std::shared_ptr<Student> StudentClass::GetStudent(int number)
{

	return m_studentNumMap[number];

}
