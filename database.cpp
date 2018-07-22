#include "database.h"
#include <iostream>

DataBase::DataBase()
{

}

void DataBase::addPerson(Person *person)
{
    list_persons.push_back(person);
}

void DataBase::showDB()
{
    for(auto& x: list_persons)
    {
        std::cout<<"Name: " << x->getName()<< std::endl;
    }
}
