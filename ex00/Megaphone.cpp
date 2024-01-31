/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:48:33 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/15 16:48:38 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void ft_toupper(std::string &str)
{
    int i(0);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        std::cout << str[i];
       i++;
    }
}

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        int i(1);
        std:: string str;
        while (i < argc)
        {
            str = argv[i];
            ft_toupper(str);
            i++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}
