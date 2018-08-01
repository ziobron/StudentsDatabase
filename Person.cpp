#include "Person.hpp"

Person::Person(const std::string & name,
               const std::string & lastName,
               const std::string & pesel,
               Gender gender,
               const std::string & address)
    : name_(name)
    , lastName_(lastName)
    , pesel_(pesel)
    , gender_(gender)
    , address_(address)
{}

std::string Person::getLastName() const
{
    return lastName_;
}
