#include "Student.h"

Student::Student(const std::string &name, int number, const std::string &id)
	:	m_name		(name),
		m_number	(number),
		m_id		(id)
{

	m_year = m_id.substr(0, 4);
	m_yearId = m_id.substr(4);

}

std::string Student::GetName()
{

	return m_name;

}

int Student::GetNumber()
{

	return m_number;

}

std::string Student::GetYear()
{

	return m_year;

}

std::string Student::GetYearId()
{

	return m_yearId;

}

std::string Student::GetId()
{

	return m_id;

}

