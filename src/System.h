#pragma once

#include "SchoolYear.h"
#include "StudentClass.h"
#include "StudentForm.h"
#include "Student.h"

#include <map>
#include <string>

typedef std::map<int, std::shared_ptr<StudentForm>> StudentFormMap;

class System
{

public:

	System() = default;

	void AddForm(int formNumber);
	void DeleteForm(int formNumber);

	bool FormExist(int formNumber);

	std::shared_ptr<StudentForm> GetForm(int formNumber);

	StudentFormMap &GetForms();

private:

	StudentFormMap m_studentForms;

};
