#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

using std::string;

class PhoneBook
{
    private:
    Contact contacts[8];
    int num_of_contacts;
    int j;
    int added;

    public:
    PhoneBook();
    void    add_contact(string first_name, string last_name, string nickname, string phone_number, string darkest_secret);
    void    search_contact();
};

#endif