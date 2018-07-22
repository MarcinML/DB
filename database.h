#pragma once
#include "person.h"
#include <list>

class DataBase
{
public:
    DataBase();
    void addPerson(Person*);
    void findPersonBySurname();
    void findPersonByPesel();
    void showDB();
    void deletePersonByPESEL();
    void saveDB();
    void readDB();
    void sortByPayment();
    void sortByPesel();
    void sortBySurname();
private:
    std::list<Person*> list_persons;
};




