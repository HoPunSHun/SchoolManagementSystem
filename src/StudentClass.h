#pragma once

#include "Student.h"

#include <string>
#include <memory>
#include <map>

typedef std::map<std::string, std::shared_ptr<Student>> StudentNameMap;
typedef std::map<char, std::shared_ptr<Student>> StudentNumMap;

class StudentClass
{

public:

	StudentClass() = default;

	StudentClass(int form, char name);

	void AddStudent(const std::string &name, int number, const std::string &id);

	const StudentNameMap &GetStudentNameMap() const;
	const StudentNumMap &GetStudentNumMap() const;

private:

	bool StudentExist(const std::string &name) const;
	bool StudentExist(int number) const;

	std::shared_ptr<Student> GetStudent(const std::string &name);
	std::shared_ptr<Student> GetStudent(int number);

private:

	int m_form;
	char m_name;

	StudentNameMap m_studentNameMap;
	StudentNumMap m_studentNumMap;

};
