/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoteo-be <aoteo-be@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/13/06 21:00:28 by aoteo-be          #+#    #+#             */
/*   Updated: 2022/13/06 21:15:47 by aoteo-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {};

PhoneBook::~PhoneBook() {};

void PhoneBook::ADD(int counter)
{
	std::cout << std::endl;
	this->contacts[counter].index = (char)(counter + 1 + '0');
	std::cout << "First name: ";
	std::cin >> this->contacts[counter].first_name;
	//std::cin.getline (this->contacts[counter].first_name, MAX_ABOUT_LEN, '\n');
	std::cout << "Last name: ";
	std::cin >> this->contacts[counter].last_name;
	std::cout << "Nickname: ";
	std::cin >> this->contacts[counter].nickname;
	std::cout << "Phone: ";
	std::cin >> this->contacts[counter].phone;
	std::cout << "Darkest secret: ";
	std::cin >> this->contacts[counter].darkest_secret;
	std::cout << std::endl;
}

void PhoneBook::SEARCH()
{
	int			i;
	int 		record_number;
	std::string index;

	i = 0;
	std::cout << "   Index  |First name|Last  name| Nickname |" << std::endl;
	while (i < 8 && (this->contacts[i].index).length() == 1)
	{
		fix_string(this->contacts[i].index);
		fix_string(this->contacts[i].first_name);
		fix_string(this->contacts[i].last_name);
		fix_string(this->contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl << "Enter the index of the record to be retrieved: ";
	std::cin >> record_number;
	while (record_number < 1 || record_number >= 9 || (this->contacts[record_number - 1].index).length() == 0)
	{
		std::cout << "No valid record. Enter a valid value: ";
		std::cin >> record_number;
	}
	std::cout << std::endl << this->contacts[record_number - 1].index << std::endl;
	std::cout << this->contacts[record_number - 1].first_name << std::endl;
	std::cout << this->contacts[record_number - 1].last_name << std::endl;
	std::cout << this->contacts[record_number - 1].nickname << std::endl << std::endl;
}