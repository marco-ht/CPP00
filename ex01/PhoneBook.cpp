/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:20:46 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 02:01:40 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::string;

PhoneBook::PhoneBook()
{
    num_of_contacts = 0;
    j = 0;
};

void    PhoneBook::add_contact(string first_name, string last_name, string nickname, string phone_number, string darkest_secret)
{
    if (j == 8)
        j = 0;
    contacts[j].setContact(j, first_name, last_name, nickname, phone_number, darkest_secret);
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
    i = 0;
    while (i < num_of_contacts)
    {
        contacts[i].printContact();
        i++;
    }
    std::cout << "Enter the index of the entry to display: ";
    std::cin >> i;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Not a number." << std::endl;
        return;
    }
    if (i >= 0 && i < num_of_contacts)
        contacts[i].printContactFull();
    else
        std::cout << "Invalid index number." << std::endl;
}
