/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <cgeoffra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:56:26 by cgeoffra          #+#    #+#             */
/*   Updated: 2024/01/31 17:00:35 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phoneBook.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int main()
{
    std::string command;
    PhoneBook phonebook;
    int i = 0;

    while (1)
    {
        std::cout << "Entrez une commande (ADD, SEARCH, EXIT)" << std::endl;
        getline(std::cin, command);
        if (command == "ADD")
        {
            std::cout << "Vous avez choisi ADD" << std::endl;
            phonebook.resetIndex();
            phonebook.Index();
            phonebook.showIndex();
            phonebook.create();
            
        }
        else if (command == "SEARCH")
        {
            std::cout << "Vous avez choisi SEARCH" << std::endl;
            phonebook.resumeAllContact();
            while (1)
            {
                std::cout << "Entrez l'index de votre contact pour plus d'information ou 0 pour sortir " << std::endl;
                getline(std::cin, phonebook.search);
                i = std::atoi(phonebook.search.c_str());
                if (i == 0)
                    break;
                else if (i >= 1 && i <= 8)
                {  
                    phonebook.resumeContact();
                }
                else if (i > 8 || i < 0)
                    std::cout << "Entrez un index valide" << std::endl;   
            }
        }
        else if (command == "EXIT")
        {   
            std::cout << "Le programme quitte et vos contacts sont perdus." << std::endl;
            break;
        }
    }
    return 0;
}
