/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:05:17 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 22:31:01 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROGRAM_HPP
# define PROGRAM_HPP

#include <string>

typedef struct s_contact
{
    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone_number;
    std::string  darkest_secret;
} t_contact;

#endif
