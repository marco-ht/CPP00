/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:02:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/06 11:22:12 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
       PhoneBook pb;
       t_contact ct;
       std::string str;
       
       std::cout << "=== My Awesome PhoneBook ===" << std::endl;
       while (1)
       {
              std::cout << "Type ADD to add a contact, SEARCH to find a contact or EXIT to quit." << std::endl;
              std::getline(std::cin, str);
              if (str == "ADD")
                     pb.add_contact();
              else if (str == "SEARCH")
                     pb.search_contact();
              else if(str == "EXIT")
                     return(0);
       }
}
