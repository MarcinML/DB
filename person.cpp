#include "person.h"

Person::Person()
{

}

void Person::setName(std::string name)
{
    m_name = name;
}

std::string Person::getName() const
{
    return m_name;
}
