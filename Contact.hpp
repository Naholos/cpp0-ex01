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

#ifndef EX01_CONTACT_H
#define EX01_CONTACT_H

# include <iomanip>
# include <iostream>
# include <string>

void fix_string(std::string str);

class Contact
{
	public:
			Contact();
			~Contact();
			std::string index;
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string phone;
			std::string darkest_secret;
};

#endif
