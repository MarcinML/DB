#pragma once
#include <string>


class Person
{
public:
    Person();
    std::string getName() const;
    void getSurname() const;
    void getPESEL() const;
    void getSex() const;
    void getAddress() const;
    void checkPESEL();
    void setName(std::string);
    void setSurname();
    void setPesel();
    void setSex();
    void setAddress();
    virtual void setPayment() = 0;
    virtual void getPayment() const = 0;

private:
    std::string m_name;
    std::string m_surname;
    std::string m_PESEL;
    char m_sex;
    std::string m_address;

};




