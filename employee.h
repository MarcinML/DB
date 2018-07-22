#pragma once
#include "person.h"

class Employee: public Person
{
public:
    Employee();
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
private:
    unsigned int m_payment;

};

