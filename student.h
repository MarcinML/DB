#pragma once
#include "person.h"

class Student: public Person
{
public:
    Student();
    void getName() const;
    void getSurname() const;
    void getPESEL() const;
    void getSex() const;
    void getAddress() const;
    void checkPESEL();
    void setName();
    void setSurname();
    void setPesel();
    void setSex();
    void setAddress();
    void setPayment() override{};
    void getPayment() const override{};
    void setIndexNumber();
    void getIndexNumber();
private:

    std::string m_indexNumber;

};

