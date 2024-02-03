#include "System.h" 

void System::AddForm(int formNumber)
{

	m_studentForms[formNumber] = std::make_shared<StudentForm>(formNumber);

}

bool System::FormExist(int formNumber)
{

	return m_studentForms.find(formNumber) == m_studentForms.end() ? false : true;

}

std::shared_ptr<StudentForm> System::GetForm(int formNumber)
{

	return m_studentForms[formNumber];

}
