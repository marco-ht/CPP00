/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:02:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 01:28:03 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::string;

int main(void)
{
       PhoneBook pb;
       string str;

       //fare struttura
       string  first_name;
       string  last_name;
       string  nickname;
       string  phone_number;
       string  darkest_secret;
       
       std::cout << "=== My Awesome PhoneBook ===" << std::endl;
       while (1)
       {
              std::cout << "Type ADD to add a contact, SEARCH to find a contact or EXIT to quit." << std::endl;
              std::cin >> str;
              if (str == "ADD")
              {
                     std::cout << "first_name: ";
                     std::cin >> first_name;
                     std::cout << "last_name: ";
                     std::cin >> last_name;
                     std::cout << "nickname: ";
                     std::cin >> nickname;
                     std::cout << "phone_number: ";
                     std::cin >> phone_number;
                     std::cout << "darkest_secret: ";
                     std::cin.ignore();
                     std::getline(std::cin, darkest_secret);
                     pb.add_contact(first_name, last_name, nickname, phone_number, darkest_secret);
              }
              else if (str == "SEARCH")
                     pb.search_contact();
              else if(str == "EXIT")
                     return(0);
       }
}
