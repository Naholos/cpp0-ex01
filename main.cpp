#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.hpp"

void fix_string(std::string str)
{
	if (str.length() > 10)
	{
		str.insert(9, ".");
		str.resize(10);
		std::cout << std::setw(10) << str;
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << str;
	}
	std::cout << "|";
}

int main()
{
	Contact		contact[9];
	int			i;
	std::string	line;

	i = 0;
	while (true)
	{
		if (i == 9)
			i = 0;
		std::cin >> line;
		if (line == "ADD")
		{
			contact[i].ADD(i);
			i++;
		}
		else if (line == "SEARCH")
			Contact::SEARCH(contact);
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}
