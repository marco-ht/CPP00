/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:20:46 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/06 12:43:25 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "program.hpp"

PhoneBook::PhoneBook()
{
    num_of_contacts = 0;
    j = 0;
};

void    PhoneBook::add_contact()
{
    std::cout << "First Name: ";
    std::getline(std::cin, ct.first_name);
    std::cout << "Last Name: ";
    std::getline(std::cin, ct.last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, ct.nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, ct.phone_number);
    while (!ct.phone_number.empty() && !is_numeric())
    {
        std::cout << "Phone number must contain only numbers." << std::endl;
        std::cout << "Phone Number: ";
        std::getline(std::cin, ct.phone_number);
    }
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, ct.darkest_secret);
    if (ct.first_name == "" || ct.last_name == "" || ct.nickname == "" || ct.phone_number == "" || ct.darkest_secret == "")
    {
        std::cout << "Empty fields. Contact not saved." << std::endl;
        return;
    }
    if (j == 8)
        j = 0;
    contacts[j].setContact(ct);
    j++;
    if (num_of_contacts < 8)
        num_of_contacts++;
    std::cout << "Contact added." << std::endl;
}

void    PhoneBook::search_contact()
{
    int i;
    
    if (num_of_contacts == 0)
    { 
        std::cout << "Empty Phonebook. Add a contact first." << std::endl;
        return;
    }
    std::cout << std::endl;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    i = 0;
    while (i < num_of_contacts)
    {
        std::cout << std::setw(10) << i << "|";
        contacts[i].printContact();
        i++;
    }
    std::cout << std::endl;
    std::cout << "Enter the index of the entry to display: ";
    std::cin >> i;
    std::cin.ignore(1000, '\n');
    std::cout << std::endl;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cout << "Invalid input. Not a number." << std::endl;
        std::cout << std::endl;
        return;
    }
    if (i >= 0 && i < num_of_contacts)
        contacts[i].printContactFull();
    else
        std::cout << "Invalid index number." << std::endl;
    std::cout << std::endl;
}

bool    PhoneBook::is_numeric()
{
    size_t i;
    
    i = 0;
    while (i < ct.phone_number.length())
    {
        if (!std::isdigit(static_cast<unsigned char>(ct.phone_number[i])))
            return (0);
        i++;
    }
    return(1);
}
