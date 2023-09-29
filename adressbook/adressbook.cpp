// adressbook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include "tutorial/addressbook.pb.h"
#include "person.h"
#include "server.h"


int main()
{
    
    /*tutorial::Person p = createPerson(1, "Vero", "veve.67@mail.net", "000000001", tutorial::Person::WORK);
    tutorial::Person p2 = createPerson(1, "Gege", "gege.58@mail.net", "500000002", tutorial::Person::MOBILE);
    std::stringstream tmp;
    p2.SerializeToOstream(&tmp);
    std::cout<< tmp.str();*/
    /*tutorial::AddressBook tmp_addressBook;
    tutorial::Person* p = tmp_addressBook.add_people();
    *p = createPerson(1, "Vero", "veve.67@mail.net", "000000001", tutorial::Person::WORK);
    
    p = tmp_addressBook.add_people();
    *p = createPerson(2, "Gege", "gege.58@mail.net", "500000002", tutorial::Person::MOBILE);

    std::stringstream tmp;
    tmp_addressBook.SerializeToOstream(&tmp);
    std::cout << tmp.str();
    
    tutorial::Person pGet = getPersonById(1, tmp_addressBook);
    pGet.SerializeToOstream(&tmp);
    std::cout << tmp.str();

    

    tmp_addressBook.clear_people();*/
    
    runServer();

}

