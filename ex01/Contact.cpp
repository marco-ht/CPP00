/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:20:37 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 01:23:11 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

using std::string;

// can be improve using a struct to pass the contact
void    Contact::setContact(int index, string first_name, string last_name, string nickname, string phone_number, string darkest_secret)
{
    this->index = index;
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}
void    Contact::printContact()
{
    std::cout << index << "|" << first_name << "|" << last_name << "|" << nickname << std::endl;
    //to implement the format 10 chars, alligned to right etc.
}

void    Contact::printContactFull()
{
    std::cout << "first_name: " << first_name << std::endl;
    std::cout << "last_name: " << last_name << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "phone_number: " << phone_number << std::endl;
    std::cout << "darkest_secret: " << darkest_secret << std::endl;
}
