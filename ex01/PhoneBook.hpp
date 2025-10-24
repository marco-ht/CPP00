/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:01:46 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 22:28:41 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"
#include "program.hpp"

class PhoneBook
{
    private:
    Contact contacts[8];
    int num_of_contacts;
    int j;

    public:
    PhoneBook();
    void    add_contact(t_contact ct);
    void    search_contact();
};

#endif