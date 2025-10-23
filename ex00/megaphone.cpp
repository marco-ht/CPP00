/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:04:59 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/23 19:52:46 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_upperstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        std::cout << static_cast<char>(std::toupper(str[i]));
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
