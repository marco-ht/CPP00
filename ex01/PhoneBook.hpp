/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:01:46 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/06 12:31:06 by mpierant         ###   ########.fr       */
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
    t_contact ct;

    public:
    PhoneBook();
    void    add_contact();
    void    search_contact();
    bool    is_numeric();
};

#endif
