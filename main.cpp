#include <iostream>
#include "database.h"
#include "person.h"
#include "student.h"
#include "employee.h"

using namespace std;

int main()
{
    DataBase DB;
    Person* s1 = new Student;
    s1->setName("Janek");
    DB.addPerson(s1);

    Person* s2 = new Student;
    s2->setName("Franek");
    DB.addPerson(s2);

    Person* s3 = new Student;
    s3->setName("Krzysiek");
    DB.addPerson(s3);

    Person* s4 = new Employee;
    s4->setName("Ania");
    DB.addPerson(s4);

    Person* s5 = new Employee;
    s5->setName("Hania");
    DB.addPerson(s5);

    DB.showDB();

    return 0;
}
