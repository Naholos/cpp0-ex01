/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoteo-be <aoteo-be@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:11:28 by aoteo-be          #+#    #+#             */
/*   Updated: 2022/06/06 20:54:47 by aoteo-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

void Contact::ADD(int counter)
{
	std::cout << std::endl;
	this->index = (char)(counter + 1 + '0');
	std::cout << "First name: ";
	std::cin >> this->first_name;
	std::cout << "Last name: ";
	std::cin >> this->last_name;
	std::cout << "Nickname: ";
	std::cin >> this->nickname;
	std::cout << "Phone: ";
	std::cin >> this->phone;
	std::cout << "Darkest secret: ";
	std::cin >> this->darkest_secret;
	std::cout << std::endl;
}

void Contact::SEARCH(Contact contact[9])
{
	int			i;
	int 		record_number;
	std::string index;

	i = 0;
	std::cout << "   Index  |First name|Last  name| Nickname |" << std::endl;
	while (i < 9 && (contact[i].index).length() == 1)
	{
		fix_string(contact[i].index);
		fix_string(contact[i].first_name);
		fix_string(contact[i].last_name);
		fix_string(contact[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl << "Enter the index of the record to be retrieved: ";
	std::cin >> record_number;
	while (record_number < 1 || record_number >= 9 || (contact[record_number - 1].index).length() == 0)
	{
		std::cout << "No valid record. Enter a valid value: ";
		std::cin >> record_number;
	}
	std::cout << std::endl << contact[record_number - 1].index << std::endl;
	std::cout << contact[record_number - 1].first_name << std::endl;
	std::cout << contact[record_number - 1].last_name << std::endl;
	std::cout << contact[record_number - 1].nickname << std::endl;
}