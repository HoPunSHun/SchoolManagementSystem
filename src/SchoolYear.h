#pragma once

#include <string>

class SchoolYear
{

public:

	SchoolYear() = default;

	SchoolYear(const std::string &from, const std::string &to);

private:	

	std::string m_from, m_to;

};
