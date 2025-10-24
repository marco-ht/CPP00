/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:20:37 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 03:12:15 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "program.hpp"

using std::string;

void    Contact::setContact(int index, t_contact ct)
{
    this->index = index;
    this->first_name = ct.first_name;
    this->last_name = ct.last_name;
    this->nickname = ct.nickname;
    this->phone_number = ct.phone_number;
    this->darkest_secret = ct.darkest_secret;
}
void    Contact::printContact()
{
    std::cout << index << "|" << first_name << "|" << last_name << "|" << nickname << std::endl;
    //to implement the format 10 chars, alligned to right etc.
}

void    Contact::printContactFull()
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
