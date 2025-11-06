/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:20:37 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/06 12:42:46 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"
#include "program.hpp"

void    Contact::setContact(t_contact ct)
{
    this->first_name = ct.first_name;
    this->last_name = ct.last_name;
    this->nickname = ct.nickname;
    this->phone_number = ct.phone_number;
    this->darkest_secret = ct.darkest_secret;
}

void    Contact::printContact()
{
    if(first_name.length() > 10)
        std::cout << first_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << first_name << "|";
    if(last_name.length() > 10)
        std::cout << last_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << last_name << "|";
    if(nickname.length() > 10)
        std::cout << nickname.substr(0, 9) << "." << std::endl;
    else
        std::cout << std::setw(10) << nickname << std::endl;
}

void    Contact::printContactFull()
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
