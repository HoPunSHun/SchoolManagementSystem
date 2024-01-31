#include "Student.h"

Student::Student(const std::string &name, int number, const std::string &id)
	:	m_name		(name),
		m_number	(number),
		m_id		(id)
{

	m_year = m_id.substr(0, 4);
	m_yearId = m_id.substr(4);

}

std::string Student::GetName() const
{

	return m_name;

}

int Student::GetNumber() const
{

	return m_number;

}

std::string Student::GetYear() const
{

	return m_year;

}

std::string Student::GetYearId() const
{

	return m_yearId;

}

std::string Student::GetId() const
{

	return m_id;

}

