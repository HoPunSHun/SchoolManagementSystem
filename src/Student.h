#pragma once

#include <string>

class Student
{

public:

	Student() = default;

	Student(const std::string &name, int m_number, const std::string &id);

	std::string GetName();

	int GetNumber();

	std::string GetYear();

	std::string GetYearId();

	std::string GetId();

private:

	std::string m_name;
	std::string m_year;
	std::string m_yearId;
	std::string m_id;

	int m_number;

};
