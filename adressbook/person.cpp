#include <iostream>
#include <sstream>
#include "tutorial/addressbook.pb.h"
#include "person.h"

tutorial::Person createPerson(int id, const char* name, const char* email, const char* nb, tutorial::Person::PhoneType type) {
    tutorial::Person p;
    p.set_id(id);
    p.set_name(name);
    p.set_email(email);
    tutorial::Person::PhoneNumber* number = p.add_phones();
    number->set_number(nb);
    number->set_type(type);
    return p;
}

bool getPersonById(int id, tutorial::AddressBook aBook, tutorial::Person* arg_person) {
    const auto list = aBook.people();
    for (const auto element : list) {
        if (element.id() == id)
        {
            *arg_person = element;
            return true;
        }
            
    }
    return false;
}