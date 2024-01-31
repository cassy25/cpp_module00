/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <cgeoffra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:56:09 by cgeoffra          #+#    #+#             */
/*   Updated: 2024/01/31 17:07:17 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

//A function that returns the information entered by the user 
std::string    Contact::info(std::string str)
{
    std::string info;
    std::cout << str;
    getline(std::cin, info);
    return (info);
}

//A function that saves information entered by the user
void    Contact::saveInfo()
{
    while (1)
    {
        _name = info("Entrez le prenom : ");
        if (!(_name.empty()))
            break ;
    }
    while (1)
    {    
        _lastName = info("Entrez le nom de famille : ");
        if (!(_lastName.empty()))
            break ;
    }   
    while (1)
    {
        _nickname = info("Entrez le surnom : ");
        if (!(_nickname.empty()))
            break ;
    }
    while (1)
    {
        _phoneNumber = info("Entrez le numero de telephone : ");
        if (!(_phoneNumber.empty()))
            break ;
    }
    while (1)
    {
        _darkestSecret = info("Entrez le plus lourd secret : ");
        if (!(_darkestSecret.empty()))
            break ;
    }
}

//A function that displays contact information
void Contact::afficherContact()
{
    _name = format(_name);
    std::cout << std::setw(10) << _name << "|";
    _lastName = format(_lastName);
    std::cout << std::setw(10) << _lastName << "|";
    _nickname = format(_nickname);
    std::cout << std::setw(10) << _nickname << "|";
}

void Contact::afficherContactIndex()
{
    _name = format(_name);
    std::cout << "Prenom : " << _name << std::endl;
    _lastName = format(_lastName);
    std::cout << "Nom de famille : " << _lastName << std::endl;
    _nickname = format(_nickname);
    std::cout << "Surnom : " << _nickname << std::endl;
    _phoneNumber = format(_phoneNumber);
    std::cout << "Numero de telephone : " << _phoneNumber << std::endl;
}

//A function that displays the secret for more information
void Contact::afficherSecret()
{
    _darkestSecret = format(_darkestSecret);
    std::cout << "Secret : " << _darkestSecret << std::endl;
}

//A function for replace last char by a point
std::string Contact::format(std::string info)
{
    size_t width = 10;
    std::string formatName = info.substr(0, width);
    if (info.length() >= width)
    {
        formatName[width - 1] = '.';
    }
    else
        return (info);
    return (formatName);
}