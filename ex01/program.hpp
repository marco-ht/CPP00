/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:05:17 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 02:14:14 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_HPP
# define PROGRAM_HPP

#include <string>
using std::string;

typedef struct s_contact
{
    string  first_name;
    string  last_name;
    string  nickname;
    string  phone_number;
    string  darkest_secret;
} t_contact;

#endif
