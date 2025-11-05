/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:04:59 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/05 16:52:04 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    ft_upperstr(std::string str)
{
    size_t i;

    i = 0;
    while (i < str.length())
    {
        std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (i < argc)
        {
            ft_upperstr(argv[i]);
            i++;
        }
        std::cout << std::endl;
    }
}
