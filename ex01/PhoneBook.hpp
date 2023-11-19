/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:13:37 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/17 21:07:29 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip> 

class PhoneBook
{
	private :
		Contact contact[8];
		int index;
	public:
		PhoneBook();
		void	add_contact(Contact &contact, int i);
		Contact	get_contact(Contact &contact, int i);
		~PhoneBook();

};
#endif