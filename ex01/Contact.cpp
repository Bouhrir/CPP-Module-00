/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:01:54 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/17 21:02:38 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::SETfirstname(std::string value){
	firstname = value;
}

string Contact::GETfirstname() {
	return firstname;
}

void Contact::SETlastname(std::string value) {
	lastname = value;
}

string Contact::GETlastname() {
	return lastname;
}

void Contact::SETnickname(std::string value) {
	nickname = value;
}

string Contact::GETnickname() {
	return nickname;
}

void Contact::SETphonenumber(std::string value) {
	phonenumber = value;
}

string Contact::GETphonenumber() {
	return phonenumber;
}

void Contact::SETdarksecret(std::string value) {
	darksecret = value;
}

string Contact::GETdarksecret() {
	return darksecret;
}
