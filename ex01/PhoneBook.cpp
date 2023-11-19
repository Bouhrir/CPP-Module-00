/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:28:49 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/17 16:53:11 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

void	PhoneBook::add_contact(Contact& contact, int i){
	
	this->contact[i].SETfirstname(contact.GETfirstname());
	this->contact[i].SETlastname(contact.GETlastname());
	this->contact[i].SETnickname(contact.GETnickname());
	this->contact[i].SETphonenumber(contact.GETphonenumber());
	this->contact[i].SETdarksecret(contact.GETdarksecret());
}
Contact  PhoneBook::get_contact(Contact &contact, int i){
	return this->contact[i];
}