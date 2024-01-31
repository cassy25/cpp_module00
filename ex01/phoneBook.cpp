/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <cgeoffra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:55:44 by cgeoffra          #+#    #+#             */
/*   Updated: 2024/01/31 17:00:58 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

//A function who show the contact resume for the index  
void    PhoneBook::resumeAllContact(void)
{
    int i = 1;
    while (i <= 8)
    {
        std::cout << "Index : " << i << " | ";
        contact[i].afficherContact();
        std::cout << std::endl;
        i++;
    }
}

//A function who show the contact for the index compared with the search
void    PhoneBook::resumeContact(void)
{
    int i = 1;
    int index;
    while (i <= 8)
    {
        if (i == (index = std::atoi(search.c_str())))
        {
            std::cout << "Index : " << i << std::endl;
            contact[i].afficherContactIndex();
            contact[i].afficherSecret();
        }
        i++;
    }
}

//A function who save info of the contact
void  PhoneBook::create(void)
{
    
    contact[index].saveInfo();
}

//A function who increase the index
void    PhoneBook::Index()
{
    index++;
}

//A function who write the index
void    PhoneBook::showIndex()
{
    std::cout << "L'index de votre contact est le : " << index << std::endl;
}

//A function who put index = 0 when index > 8
void    PhoneBook::resetIndex()
{
    if (index >= 8)
        index = 0;
}
