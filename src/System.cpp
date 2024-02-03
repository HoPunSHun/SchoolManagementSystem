#include "System.h" 

void System::AddForm(int formNumber)
{

	m_studentForms[formNumber] = std::make_shared<StudentForm>(formNumber);

}

void System::DeleteForm(int formNumber)
{

	m_studentForms.erase(formNumber);

}

bool System::FormExist(int formNumber)
{

	return m_studentForms.find(formNumber) == m_studentForms.end() ? false : true;

}

std::shared_ptr<StudentForm> System::GetForm(int formNumber)
{

	return m_studentForms[formNumber];

}

StudentFormMap &System::GetForms()
{

	return m_studentForms;

}
