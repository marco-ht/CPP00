/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:20:41 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 00:30:58 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

using std::string;

class   Contact
{
    private:
    int index;
    string  first_name;
    string  last_name;
    string  nickname;
    string  phone_number;
    string  darkest_secret;

    public:
    void    setContact(int index, string first_name, string last_name, string nickname, string phone_number, string darkest_secret);
    void    printContact();
    void    printContactFull();
};

#endif