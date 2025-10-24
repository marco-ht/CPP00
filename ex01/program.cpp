/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:02:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 03:29:14 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "program.hpp"

using std::string;

int main(void)
{
       PhoneBook pb;
       t_contact ct;
       string str;
       
       std::cout << "=== My Awesome PhoneBook ===" << std::endl;
       while (1)
       {
              std::cout << "Type ADD to add a contact, SEARCH to find a contact or EXIT to quit." << std::endl;
              std::getline(std::cin, str);
              if (str == "ADD")
              {
                     std::cout << "First Name: ";
                     std::getline(std::cin, ct.first_name);
                     std::cout << "Last Name: ";
                     std::getline(std::cin, ct.last_name);
                     std::cout << "Nickname: ";
                     std::getline(std::cin, ct.nickname);
                     std::cout << "Phone Number: ";
                     std::getline(std::cin, ct.phone_number);
                     std::cout << "Darkest Secret: ";
                     std::getline(std::cin, ct.darkest_secret);
                     if (ct.first_name == "" || ct.last_name == "" || ct.nickname == "" || ct.phone_number == "" || ct.darkest_secret == "")
                     {
                            std::cout << "Empty fields. Contact not saved." << std::endl;
                            continue;
                     }
                     pb.add_contact(ct);
              }
              else if (str == "SEARCH")
                     pb.search_contact();
              else if(str == "EXIT")
                     return(0);
       }
}
