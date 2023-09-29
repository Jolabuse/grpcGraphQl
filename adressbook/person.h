#ifndef PERSON_H
#define PERSON_H


tutorial::Person createPerson(int id, const char* name, const char* email, const char* nb, tutorial::Person::PhoneType type);
bool getPersonById(int id, tutorial::AddressBook aBook, tutorial::Person* arg_person);

#endif // !PERSON_H
